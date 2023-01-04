//Davonte Littleton
//Project 1
//22 February 2021
#ifndef BIGINT_HPP_
#define BIGINT_HPP_


#include <ostream>
const int CAPACITY = 200;
class bigint {
public:
	bigint();
	bigint(const char[]);
	bigint(int);
	void debugPrint(std::ostream&) const;
	bool operator==(int rhs) const;
	bool operator==(bigint rhs) const;
	friend std::ostream& operator << (std::ostream&, const bigint&);
	friend std::istream& operator >> (std::istream&, bigint&);
	bigint operator +(const bigint&) const;
	bigint operator *(const bigint&) const;
	int &operator [] (int);
	bigint times_digit(int) const;
	bigint times_10(int) const;

private:
 	int lengthOfNum;
	int bigNumber[CAPACITY];
}; 

#endif 
