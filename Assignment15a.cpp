// Charlie Towe
// December 8th, 2021
// CIS 1202 501

#include<iostream>
using namespace std;

char character(char, int);

int main()
{
	char
		start,
		newValue;

	int
		offset;

	try
	{
		newValue = character('a', 1);
		cout << endl << "New Value: " << newValue << endl; 
	}
	catch (string exept)
	{
		cout << endl << exept << endl;
	}
	try
	{
		newValue = character('a', -1);
		cout << endl << "New Value: " << newValue << endl;
	}
	catch (string exept)
	{
		cout << endl << exept << endl;
	}
	try
	{
		newValue = character('Z', -1);
		cout << endl << "New Value: " << newValue << endl;
	}
	catch (string exept)
	{
		cout << endl << exept << endl;
	}
	try
	{
		newValue = character('?', 5);
		cout << "New Value: " << newValue << endl;
	}
	catch (string exept)
	{
		cout << endl << exept << endl;
	}
	
}

char character(char start, int offset)
{
	int
		newValue = start + offset;

	if ((start < 'A' || start > 'Z') && (start < 'a' || start > 'z'))
	{
		string
			exept = "InvalidCharacterException.";
		throw exept;
	}

	else if ((newValue < 'A' || newValue > 'Z') && (newValue < 'a' || newValue > 'z'))
	{
		string
			exept = "InvalidRangeException.";
		throw exept;
	}

	else
		return newValue;
}