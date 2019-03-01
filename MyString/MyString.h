#pragma once
#include <iostream>
using namespace std;
// MyString class declaration goes here

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
	//overloaded operaters
	void operator = (const MyString &);
	MyString operator + (const MyString &);
	bool operator == (const MyString &);
	//accessor function
	const char *c_str();
	friend ostream &operator << (ostream &strm, const MyString &);
};
