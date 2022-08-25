// Name: Caleb McClure
// Date: 08/25/2022
// Program description: This is where I will test the operations for the personType class that I created in the personTypeImp file

#include<iostream>
#include<string>
#include"personType.h"

using namespace std;

/******************************************   PROTOTYPES   *********************************************************/

void outputStudentInfo(personType object, string& first, string& last);


/********************************************   MAIN FUNCTION   ****************************************************/

int main()
{
	personType student("Caleb", "Lyn", "McClure"); //initializes the first, middle, and last name of the student object

	string firstName; // variable to hold the first name to be entered by user
	string lastName; // variable to hold the last name to be entered by user

	outputStudentInfo(student, firstName, lastName);

	student.print(); //Reprint the name of the student to the screen to see the comparison
	cout << endl << endl;
	student.isFirstName(firstName); //compares users entry for first name with the student objects first name 
	cout << endl << endl;
	student.isLastName(lastName);  //compares users entry for last name with the student objects last name
	cout << endl << endl << endl << endl;

	return 0;
}


/*********************************************FUNCTIONS*********************************************************/

void outputStudentInfo(personType object, string& first, string& last)
{
	cout << "****Student Information****" << endl;

	cout << "First Name: " << object.getFirstName() << endl;
	cout << "Middle Name: " << object.getMiddleName() << endl;
	cout << "Last Name: " << object.getLastName() << endl;
	cout << "***************************" << endl << endl;

	cout << "Please enter the student's first name: ";
	cin >> first;								   //get users entry for first name

	cout << "Please enter the student's last name: ";
	cin >> last;                                   //get users entry for last name

	system("cls"); // Clear console screen
}