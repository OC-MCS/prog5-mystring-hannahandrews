#include "MyString.h"
#include <iostream>
//using namespace std;

//================================================
// This is the default constructer called if a 
// MyString is not initilized.
//================================================
MyString::MyString()
{
	word = {'\0'};
	size = 0;
	//cout << " default called" << endl;
}

//==============================================
// This is the constructer that gets initialized
// within main.
//==============================================
MyString::MyString(char *input)
{
	size = strlen(input) +1;

	word = new char[size];

	for (int i = 0; i < size; i++)
	{
		word[i] = input[i];
	}

	//cout << " Initialized called" << endl;
}

//============================================
// This is the copy constructer.
//============================================
MyString::MyString(const MyString &other)
{
	size = other.size;
	word = new char[size];
	for (int i = 0; i < size; i++)
	{
		word[i] = other.word[i];
	}
}

//==================================================
//char * operator =: This function assigns the value
//		of other to MyString.
//return type: char *
//		word: This is the cstring assigned to the 
//      MyString on the left of the = operator.
//==================================================
char * MyString:: operator = (const MyString &other)
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
	return word;
}

//======================================================
//MyString operator +: This function adds the contents
//		of two strings into a third string without
//		modifying the two initial strings
// return type: MyString
//		added : This is the contents of the added
//				MyStrings. 
//ERROR FOUND: A space is not being enterd between words.
//=======================================================
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
//===========================================================
//bool operator ==: This function tells if two MyString's are
//				equilavent
//return type : bool
//		same: This returns true if the functions are the same.
//===========================================================
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

//============================================================
// const char* c_str : This function is what allows the <<
//			function to view the elements of MyString.
// return type: const char *
//			word : This is the cstring within an element
//			of MyString.
//============================================================
const char* MyString::c_str()
{
	return word;
}

//============================================================
// operator << : This function is not a member of the
//		class but is a friend of it so it has access
//		to the class info. This function couts the word 
//		of the MyString being called.
// parameters: ostream &, const MyString &
//		strm: This is variable that MyString is assigned to 
//		so it can be viewed.
//		element: This is the MyString being assigned to strm.
//============================================================
ostream& operator << (ostream &strm, const MyString &element)
{
	for (int i = 0; i < element.size; i++)
	{
		strm << element.word[i];
	}

	return strm;
}

//===================================================
//~MyString: This is the destructer that clears the
// dynamically allocated memory used in the class.
// parameters: none
//===================================================
MyString ::~MyString()
{	
	//cout << "destructer called" << endl;
	delete[] word;
}