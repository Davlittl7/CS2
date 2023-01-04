//April 22nd, 2021
//Davonte Littleton 
#include <iostream>

const int STRING_SIZE = 30;

int calculatePopulation(int, double);

int main(int argc, const char * argv[]) {

  std::cout << "Enter the name of the university\n";
  char univName [STRING_SIZE]; 
  std::cin.getline(univName, STRING_SIZE);

  char done = 'N';      
  while(!(done == 'Y') || !(done == 'y')) { 
    
    std::cout << "What is the current population? ";
    int pop;
    std::cin >> pop;
    while(pop < 1) {
      std::cout << argv[0] << ": Invalid Input Error!\n";
      return -1;
    }
        
    std::cout << "What is the rate of growth? (e.g., for 10% enter 10) ";
    double growth;
    std::cin >> growth;
    while(growth < 0) {
      std::cout << argv[0] << ": Invalid Input Error!\n";
      return -1;
    }
        
    std::cout << "\nYear\tNew Population" << std::endl;
    int *newpop = new int;
    int i = 1;
    for (; i <= 5; ++i) {
      *newpop = calculatePopulation(pop, growth);
     //std::cerr << *newpop << std::endl;
      pop = *newpop;
     // delete newpop;
      std::cout << i << "\t \t" << pop << std::endl; //originally *newpop
      //delete newpop;
    }

    std::cout << "\nFinal population of " << univName;
    std::cout << " is " << pop << std::endl; //originally *newpop

    std::cout << "Done? (Y/N) ";
    std::cin >> done;
    switch (toupper(done)) {
      case 'Y':
	std::cout << "Exiting...\n";
	return -1;
      case 'N':
	std::cout << "Starting again\n";
	std::cout << "------------------------------\n";
	break;
      default:
	std::cout << argv[0] << ": Invalid input\n";
	std::cout << "The program will exit\n";
	std::cout << "------------------------------\n";
	return -1;
      }
  }
  return 0;
}

int calculatePopulation( int pop, double growth) {
  double growthRate = growth / 100;
  double increase = pop * growthRate;
  //std::cerr << growthRate << std::endl;
  return (pop + increase);
    
}
