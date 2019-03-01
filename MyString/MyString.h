#pragma once
#include <iostream>
using namespace std;
// MyString class declaration goes here
class MyString;
ostream &operator << (ostream &strm, MyString &);

class MyString
{
private:
	char *word;
	int size;
public:

	//constructers
	MyString();
	MyString(char *);
	//copy constructer
	MyString(const MyString &);
	//destructer
	~MyString();
	//This is the overloaded assignment operator function
	char * operator = (const MyString &);
	//This is the overloaded + operator function
	MyString operator + (const MyString &);
	//This is the overloaded == operator function
	bool operator == (const MyString &);
	//This is the accessor function
	const char *c_str();
	
};
