// test driver code goes here

#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char word[] = "hello";
	char word2[] = "world";
	MyString s1(word);
	MyString s2(word2);
	MyString s3;

	s3 = s1 + s2;

	cout << endl;

	cout << s3;

	if (s2 == s1)
	{
		cout << "\nsame" << endl;
	}
	else cout << "\nnot the same" << endl;

	return 0;
}
