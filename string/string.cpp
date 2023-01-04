#include "string.hpp"
#include<iostream>
#include<vector>
#include<cassert>
String::String() {
	stringSize = 1;
	str = new char[stringSize];
	str[0] = 0;
}

String::String(char a)
{
	stringSize = 2;
	str = new char[stringSize];
	str[0] = a;
	str[stringSize - 1] = 0;
	if (str[0] == '\0') {
		stringSize = 1;
	}
}

String::String(const char val[])
{
	int i = 0;
	while (val[i] != 0) {
		++i;
	}
	stringSize = i + 1;

	str = new char[stringSize];

	int j = 0;
	while (val[j] != 0) {
		str[j] = val[j];
		++j;
	}
	str[j] = 0;
}

String::String(int n) {
	stringSize = n + 1;
	str = new char[stringSize];
	str[0] = 0;
}

String::String(int n, const char val[]) {
	stringSize = n + 1;
	str = new char[stringSize];
	int i = 0;
	while (val[i] != 0) {
		str[i] = val[i];
		++i;
	}
	str[i] = 0;
}


std::vector<String> String::split(char keyChar) const
{

	std::vector<String> stringSplit;
//	std::cout << "The string is: " << *this << std::endl;
//	if(keyChar == ' ') {
//	     std::cout << "This is a space" << std::endl;
//	}
//	std::cout << "The character is: " << keyChar << std::endl;

	int pushed = 0;
	if (findch(0, keyChar) == -1) {
		stringSplit.push_back(str);
		return stringSplit;
	}

	for (int i = 0; i < this->length(); ++i) {
		if (findch(i, keyChar) != -1) {
			i = findch(i, keyChar);
			if (pushed > i) {
				stringSplit.push_back("");
			}
//			std::cout << substr(pushed, i - 1) << std::endl;
			stringSplit.push_back(substr(pushed, i - 1));
			pushed = i + 1;
		}
	}
//	std::cout << substr(pushed, this->length() - 1) << std::endl;
	stringSplit.push_back(substr(pushed, this->length() - 1));
	return stringSplit;
}

int String::convertToInt()
{
	int start = length() - 1;
	if (str[start] == '-') {
		return 0;
	}
	int integer = 0;
	int tensPlace = 1;
	for (int i = start; i >= 0; --i) {
		integer = integer + (int(str[i] - int('0')) * tensPlace);
		tensPlace = tensPlace * 10;
	}

	return integer;
}


String::String(const String& rhs)
{
	stringSize = rhs.stringSize;
	str = new char[stringSize];
	for (int i = 0; i < stringSize; ++i) {
		str[i] = rhs.str[i];
	}
}

String::~String() {
	delete [] str;
}

void String::swap(String& rhs)
{
	int tmpSize = rhs.stringSize;
	rhs.stringSize = stringSize;
	stringSize = tmpSize;
	char* tmp = rhs.str;
	rhs.str = str;
	str = tmp;
}

String String::operator+(const String& rhs) const {
	int newSize = stringSize + rhs.stringSize - 1;
	String result(newSize, this->str);	
	int i = 0;
	int offset = this->length();	

	while (rhs.str[i] != 0) {
		result.str[offset + i] = rhs.str[i];
		++i;
	}

	result.str[offset + i] = 0;
	return result;
}
String& String::operator +=(const String& rhs)
{
	int newSize = stringSize + rhs.stringSize - 1;
	String result(newSize, this->str);
	int i = 0;
	int offset = this->length();

	while (rhs.str[i] != 0) {
		result.str[offset + i] = rhs.str[i];
		++i;
	}

	result.str[offset + i] = 0;

	resetCapacity(newSize);
	int j = 0;

	while (result.str[j] != 0) {
		str[j] = result.str[j];
		++j;
	}
	str[j] = 0;
	return *this;
}
String& String::operator=(String rhs)
{
	swap(rhs);
	return *this;
}

std::ostream& operator << (std::ostream& out, const String& rhs) {
	out << rhs.str;
	return out;
}

std::istream& operator>>(std::istream& in, String& rhs)
{
        char tmp[256];
	tmp[0] = 0;
	if (!in.eof()) in >> tmp;
	rhs = String(tmp);
	return in;
}



int String::length() const
{
	int strLen = 0;
	while (str[strLen] != 0) {
		++strLen;
	}
	return strLen;
}
int String::capacity() const {
	return stringSize - 1;
}
char& String::operator[](int i)
{
	assert((i >= 0) && (i < length()));
	return str[i];
}

char String::operator[](int i) const
{
	assert((i >= 0) && (i < length()));
        return str[i];
}

bool String::operator==(const String& rhs) const {
	int i = 0;
	while ((str[i] != 0) && (rhs.str[i] != 0) && (str[i] == rhs.str[i])) ++i;
	return str[i] == rhs.str[i];
}

bool String::operator<(const String& rhs) const
{
	int i = 0;
	while ((str[i] != 0) && (rhs.str[i] != 0) && (str[i] == rhs.str[i])) ++i;
	return str[i] < rhs.str[i];
}

String String::substr(int start, int end) const
{
	if (start < 0) start = 0;
	if (end >= length()) end = length() - 1;
	if (end < 0) return "";
	if (start >= length()) return "";
	if (start > end) return "";
	String result(end - start + 1);

	int j = 0;
	for (int i = start; i <= end; ++i) {
		result.str[j] = str[i];
		++j;
	}
	result.str[j] = 0;
	return result;
}

int String::findch(int start, char ch) const
{
	if (start > length() - 1) return -1;
	int i = start;
	if (start < 0) i = 0;

	while ((str[i] != 0) && (str[i] != ch)) ++i;
	if (str[i] == ch) return i;
	else return -1;
}

int String::findstr(int start, const String& find) const
{
	if (start >= length()) return -1;
	int i = start;
	if (start < 0) i = 0;

	for (; i < stringSize; ++i) {
		if (str[i] == find[0]) {
			bool mark = true;

			for (int j = 0; j < find.length(); ++j) {
				if (str[i + j] != find[j]) {
					mark = false;
				}
			}

			if (mark) {
				return i;
			}
		}
		if (str[i] == '\0') {
			return -1;
		}
	}
	return -1;
}

void String::resetCapacity(int newStrSize)
{
	int smaller = stringSize;
	if (smaller > newStrSize) smaller = newStrSize;

	char* tmp = new char[newStrSize];

	for (int i = 0; i < smaller; ++i) tmp[i] = str[i];
	stringSize = newStrSize;

	delete[] str;
	str = tmp;
}


String operator+(const char lhs[], const String& rhs) { return String(lhs) + rhs; }

String operator+(char lhs, const String& rhs) { return String(lhs) + rhs; }

bool operator==(const char lhs[], const String& rhs) { return String(lhs) == rhs; }

bool operator==(char lhs, const String& rhs) { return String(lhs) == rhs; }

bool operator<(const char lhs[], const String& rhs) { return String(lhs) < rhs; }

bool operator<(char lhs, const String& rhs) { return String(lhs) < rhs; }

bool operator<=(const String& lhs, const String& rhs) { return (lhs < rhs) || (lhs == rhs); }

bool operator!=(const String& lhs, const String& rhs) { return !(lhs == rhs); }

bool operator>=(const String& lhs, const String& rhs) { return !(lhs < rhs) || (lhs == rhs); }

bool operator>(const String& lhs, const String& rhs) { return !(lhs < rhs); }

