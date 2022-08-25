// Name: Caleb McClure
// Date: 08/25/2022
// Program description: This is the class for person type

#include<string>
using namespace std;

class personType {

public:
	void print() const; // output first name, middle name, and last name "fName mName lName"
	
	void setFullName(string first, string middle, string last); //function sets fName, mName, and lName

	bool isFirstName(string first); //checks to see if parameter is == fName

	bool isLastName(string last); // checks to see if parameter is == lName 
	
	string getFirstName() const; // returns fName

	string getLastName() const; // returns lName

	string getMiddleName() const; //returns mName

	personType(string first = "", string middle = "", string last = ""); //Constructor: initializes values for fName, mName, and lName

private:
	string fName; // First Name
	string mName; // Middle Name
	string lName; // Last Name
};