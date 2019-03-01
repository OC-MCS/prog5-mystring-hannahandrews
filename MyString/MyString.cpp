// MyString implementation file
#include "MyString.h"
#include <iostream>
//using namespace std;

//tested and works
// default constructer
MyString::MyString()
{
	word = {'\0'};
	size = 0;
	cout << " default called" << endl;
}

//tested and works
//initializing constructer
MyString::MyString(char *input)
{
	size = strlen(input) +1;

	word = new char[size];

	for (int i = 0; i < size; i++)
	{
		word[i] = input[i];
	}

	cout << " Initialized called" << endl;
}

//tested and works
//copy constructer
MyString::MyString(const MyString &other)
{
	size = other.size;
	word = new char[size];
	for (int i = 0; i < size; i++)
	{
		word[i] = other.word[i];
	}
}

//tested and works
//sets one MyStrings to another 
void MyString:: operator = (const MyString &other)
{
	if (this != &other)
	{
		delete[] word;
		size = other.size;
		word = new char[size];
		for (int i = 0; i < other.size; i++)
		{
			word[i] = other.word[i];
		}

	}
}

//tested and works :)
//adds but doesnt modify 2 MyStrings
MyString MyString:: operator + (const MyString &other)
{
	MyString added;

	added.size = size + other.size;
	added.word = new char[added.size];
	int i = 0;
	while (i < size-1)
	{
		added.word[i] = word[i];
		i++;
	}

	i++;
	added.word[i] = ' ';

	int j = 0;
	while (j < other.size)
	{
		added.word[i + j] = other.word[j];
		j++;
	}

	return added;
}

//tested and works :)
//tells if two MyStrings are equal
bool MyString:: operator == (const MyString &other)
{
	bool same = true;

	for (int i = 0; i < size && same; i++)
	{
		if (word[i] != other.word[i])
		{
			same = false;
		}
	}

	return same;
}


//allows << operator function to see word
const char* MyString::c_str()
{
	return word;
}

//couts a MyString
ostream& operator << (ostream &strm, const MyString &element)
{
	for (int i = 0; i < element.size; i++)
	{
		strm << element.word[i];
	}

	return strm;
}

MyString ::~MyString()
{	
	cout << "destructer called" << endl;
	delete[] word;
}