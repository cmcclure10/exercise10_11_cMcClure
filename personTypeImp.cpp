// Name: Caleb McClure
// Date: 08/25/2022
// Program description: This is where I will impliment the functions from the personType class

#include<iostream>
#include<string>
#include "personType.h"

using namespace std;

// output first name, middle name, and last name "fName mName lName"
void personType::print() const
{
	cout << fName << " " << mName << " " << lName;
}

//function sets fName, mName, and lName
void personType::setFullName(string first, string middle, string last)
{
	fName = first;
	mName = middle;
	lName = last;
}

//checks to see if parameter is == fName
bool personType::isFirstName(string first)
{
	if (first == fName)
	{
		cout << "The students first name is " << fName;
		return true;
	}
	else
	{ 
		cout << "The students first name is NOT " << first;
		return false;
	}
}

// checks to see if parameter is == lName 
bool personType::isLastName(string last)
{
	{
		if (last == lName)
		{
			cout << "The students last name is " << lName;
			return true;
		}
		else
		{
			cout << "The students last name is NOT " << last;
			return false;
		}
	}
}

// returns fName
string personType::getFirstName() const
{
	return fName;
}

//returns mName
string personType::getMiddleName() const
{
	return mName;
}

// returns lName
string personType::getLastName() const
{
	return lName;
}

//Constructor initializes fName, mName, and lName
personType::personType(string first, string middle, string last)
{
	fName = first;
	mName = middle;
	lName = last;
}