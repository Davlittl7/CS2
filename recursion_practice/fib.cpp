#include<iostream>

int fib(int a);
int fib_tail(int, int, int);

int main() {
	
	int i = 0;
	int j = 0;
	int input;
	std::cout << "Enter the number of terms for the sequence: ";
	std::cin >> input;
	std::cout << "The Fibonnaci Sequence to that term is: "; 
	while (i < input) {
		std::cout << fib(i) << " ";
		++i;
	}
	std::cout << "\nThe sequence using Tail Recursion: ";
	while (j < input) {
		std::cout << fib_tail(j, 0, 1) << " ";
		++j;
	}
	std::cout << "\n";
}

int fib(int a) {
	if ((a == 1) || (a == 0)) {
		return a;
	}
	else {
		return (fib(a - 1) + fib(a - 2));
	}
}

int fib_tail(int x, int a = 0, int b = 1)
{
	if (x == 0) return a;
	if (x == 1) return b;
	return fib_tail(x - 1, b, a + b);
}
