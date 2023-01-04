#include<fstream>
#include <iostream>

void readText() {

    std::ifstream file("fileio-text.txt");
    if (!file.is_open()) {
        std::cout << "Unable to open file\n";
    }

    char spaceCheck;
    file.get(spaceCheck);
    while (!file.eof() && spaceCheck != ' ') {
        std::cout << spaceCheck;
        file.get(spaceCheck);
    }
    std::cout << '\n';
    file.close();
}
void addNums() {
    const int size = 20;
    std::ifstream file("fileio-data-1.txt");
    if (!file.is_open()) {
        std::cout << "Unable to open file\n";
    }
    int fileNum;
    int sum = 0;
    char ch;
    int i = 0;
    file >> fileNum;
    sum = fileNum;
    while (file >> ch && i != 1) {
        file >> fileNum;
        sum = sum + fileNum;
        ++i;
    }
    std::cout << sum;
    std::cout << '\n';
    file.close();
}
int main() {
    readText();
    addNums();
}

