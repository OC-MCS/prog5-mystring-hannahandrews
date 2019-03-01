//====================================================
//Hannah Andrews
//Program 5
//Due 3/1/19
//===================================================
#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;

//===================================================
//Main: In main I initialize the MyString variables
// and use cout statements to test my class
//===================================================
int main()
{
	//These are my variables that initialize s1 & s2
	char word[] = "Hi";
	char word2[] = "homies";

	//These are the MyString varaibles
	MyString s1(word);
	MyString s2(word2);
	MyString s3;

	//This cout is testing that s1 was initialized correctly and 
	// that the cout function within the code works correctly.
	cout << "S1 is initialized as: " << s1 << endl;
	cout << "S2 is initialized as:" << s2 << endl;

	//This uses the + operator function to assign s3 to s1 + s2
	s3 = s1 + s2;

	//This cout was used to test that the + operator worked correctly
	// and that the cout worked correctly in this situation as well
	cout << "S3 is now:" << s3 << endl;

	//This uses the = operator function to assign s1's value to s2 and s3.
	// This also tested that the function works with multiple assignments.
	s2 = s3 = s1;

	//This cout was used to display the new value of s2 and s3
	cout << "S2 is now:" << s2 << " and s3 is now " << s3<< endl;

	//This cout is used to test that the == operator function worked correctly.
	cout << "So s1 and s2 are now ";

	//This if statement is where the == function is tested.
	if (s2 == s1)
	{
		cout << " the same" << endl;
	}
	else cout << " not the same" << endl;

	return 0;
}
