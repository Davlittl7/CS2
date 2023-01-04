#include "bigint.hpp"
#include<fstream>
#include <iostream>

//Default constructor for bigint
bigint::bigint()
{
	for (int i = 0; i < CAPACITY; ++i) {
		bigNumber[i] = 0;
	}
	
}

bigint::bigint(const char a[])
{
	for (int i = 0; i < CAPACITY; ++i) {
		bigNumber[i] = 0;
	}
	lengthOfNum = 0;
	do {
		++lengthOfNum;
	} while (a[lengthOfNum] != '\0');
	--lengthOfNum;
	for (int i = 0; a[i] != '\0'; ++i, --lengthOfNum) {
		bigNumber[lengthOfNum] = (int(a[i]) - int('0'));
	}
}

//Constructor that converts bigint to int values
bigint::bigint(int x)
{
	for (int i = 0; i < CAPACITY; ++i) {
		bigNumber[i] = 0;
	}
	for (int i = 0; x != 0; ++i)
	{
		bigNumber[i] = x % 10;
		x = x / 10;
	}
}

//Function for debugging(prints out bigint with leading zeros)
void bigint::debugPrint(std::ostream& out) const
{
	
	for (int i = CAPACITY - 1; i >= 0; --i) {
		out << bigNumber[i] << "|";
	}
}

//== operator to compare a bigint and an integer
bool bigint::operator == (int rhs) const
{
	for (int i = 0; rhs != 0; ++i) {
		if (bigNumber[i] != rhs % 10) {
			return false;
		}
		rhs = rhs / 10;
	}

	return true;
}

//== operator to compare two bigints
bool bigint::operator==(bigint rhs) const
{
	for (int i = CAPACITY -1; i >= 0; --i) {
		if (bigNumber[i] != rhs.bigNumber[i]) {
			return false;
		}
	}
	return true;
}

bigint bigint::operator+(const bigint& rhs) const
{
	bigint result;
	for (int i = 0; i < CAPACITY; ++i) {
		result.bigNumber[i] = bigNumber[i] + rhs.bigNumber[i] + result.bigNumber[i];
		if (result.bigNumber[i] >= 10 && result.bigNumber[i] <= 19) {
			result.bigNumber[i] = result.bigNumber[i] % 10;
			result.bigNumber[i + 1] = 1;
		}
		else if (result.bigNumber[i] >= 20 && result.bigNumber[i] <= 29) {
			result.bigNumber[i] = result.bigNumber[i] % 20;
			result.bigNumber[i + 1] = 2;
		}
		else if (result.bigNumber[i] >= 30 && result.bigNumber[i] <= 39) {
			result.bigNumber[i] = result.bigNumber[i] % 30;
			result.bigNumber[i + 1] = 3;
		}
		else if (result.bigNumber[i] >= 40 && result.bigNumber[i] <= 49) {
			result.bigNumber[i] = result.bigNumber[i] % 40;
			result.bigNumber[i + 1] = 4;
		}
		else if (result.bigNumber[i] >= 50 && result.bigNumber[i] <= 59) {
			result.bigNumber[i] = result.bigNumber[i] % 50;
			result.bigNumber[i + 1] = 5;
		}
		else if (result.bigNumber[i] >= 60 && result.bigNumber[i] <= 69) {
			result.bigNumber[i] = result.bigNumber[i] % 60;
			result.bigNumber[i + 1] = 6;
		}
		else if (result.bigNumber[i] >= 70 && result.bigNumber[i] <= 79) {
			result.bigNumber[i] = result.bigNumber[i] % 70;
			result.bigNumber[i + 1] = 7;
		}
		else if (result.bigNumber[i] >= 80 && result.bigNumber[i] <= 89) {
			result.bigNumber[i] = result.bigNumber[i] % 80;
			result.bigNumber[i + 1] = 8;
		}
		else if (result.bigNumber[i] >= 90 && result.bigNumber[i] <= 99) {
			result.bigNumber[i] = result.bigNumber[i] % 90;
			result.bigNumber[i + 1] = 9;
		}
	}
	return result;
}

//Multiplies two bigint values
bigint bigint::operator*(const bigint& rhs) const
{
	bigint product, tmp;
	for (int i = 0; i < CAPACITY - 1; ++i) {
		tmp = rhs.times_digit(bigNumber[i]);
		product = product + tmp.times_10(i);
	}
	return product;
}

int& bigint::operator[](int index)
{
	int digit;
	for (int i = CAPACITY - 1; i >= 0; --i) {
		if (i == index) {
			digit = bigNumber[i];
			break;
		}
	}
	return digit;
}

//Multiplies by bigint by single digit values
bigint bigint::times_digit(int singleDigit) const
{
	bigint result;
	for (int i = 0; i < CAPACITY; ++i) {
		result.bigNumber[i] = (bigNumber[i] * singleDigit) + result.bigNumber[i];
		if (result.bigNumber[i] >= 10 && result.bigNumber[i] <= 19) {
			result.bigNumber[i] = result.bigNumber[i] % 10;
			result.bigNumber[i + 1] = 1;
		}
		else if (result.bigNumber[i] >= 20 && result.bigNumber[i] <= 29) {
			result.bigNumber[i] = result.bigNumber[i] % 20;
			result.bigNumber[i + 1] = 2;
		}
		else if (result.bigNumber[i] >= 30 && result.bigNumber[i] <= 39) {
			result.bigNumber[i] = result.bigNumber[i] % 30;
			result.bigNumber[i + 1] = 3;
		}
		else if (result.bigNumber[i] >= 40 && result.bigNumber[i] <= 49) {
			result.bigNumber[i] = result.bigNumber[i] % 40;
			result.bigNumber[i + 1] = 4;
		}
		else if (result.bigNumber[i] >= 50 && result.bigNumber[i] <= 59) {
			result.bigNumber[i] = result.bigNumber[i] % 50;
			result.bigNumber[i + 1] = 5;
		}
		else if (result.bigNumber[i] >= 60 && result.bigNumber[i] <= 69) {
			result.bigNumber[i] = result.bigNumber[i] % 60;
			result.bigNumber[i + 1] = 6;
		}
		else if (result.bigNumber[i] >= 70 && result.bigNumber[i] <= 79) {
			result.bigNumber[i] = result.bigNumber[i] % 70;
			result.bigNumber[i + 1] = 7;
		}
		else if (result.bigNumber[i] >= 80 && result.bigNumber[i] <= 89) {
			result.bigNumber[i] = result.bigNumber[i] % 80;
			result.bigNumber[i + 1] = 8;
		}
		else if (result.bigNumber[i] >= 90 && result.bigNumber[i] <= 99) {
			result.bigNumber[i] = result.bigNumber[i] % 90;
			result.bigNumber[i + 1] = 9;
		}
	}
	return result;
}

//Method that multiples bigint values by 10^n
bigint bigint::times_10(int exponent) const
{
	bigint result;
	for (int i = (CAPACITY - 1); i >= 0; --i) {
		result.bigNumber[i] = bigNumber[i - exponent];
	}

	for (int j = (exponent - 1); j >= 0; --j) {
		result.bigNumber[j] = 0;
	}
	return result;
}


//Operator that prints the bigint value to the console
std::ostream& operator <<(std::ostream& out, const bigint& rhs)
{
	bigint test;
	int stopTheCount = 0;
	for (int i = CAPACITY - 1; i >= 0; --i) {
		while (rhs.bigNumber[i] == 0 && i !=0) {
			if (stopTheCount > 0) {
				break;
			}
			--i;
		}
		++stopTheCount;
		out << rhs.bigNumber[i];
		++test.lengthOfNum;
		if (test.lengthOfNum == 80) {
			out << "\n";
			test.lengthOfNum = 0;
		}
	}
	return out;
}

std::istream& operator>>(std::istream& in, bigint& rhs)
{
	int tmpIndex = 0;
	char semiCheck;
	char tmp[CAPACITY];

	in >> semiCheck;

	while (semiCheck != ';' && !in.eof()) {
		tmp[tmpIndex] = semiCheck;
		in >> semiCheck;
		++tmpIndex;
	}

	tmp[tmpIndex] = 0;
	rhs = bigint(tmp);
	return in;
}



 




