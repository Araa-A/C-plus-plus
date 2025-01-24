#include <iostream>

int main(){

	// integer (whole number)
	int age = 14;
	int year = 2023;
	int days = 7.5; // floating point is truncated

	// double (number including floating point)
	double price =  10.99;
	double gpa = 2.5;
	double temperature = 25.1;

	std::cout << price << std::endl;

	// single character
	char grade = 'A';
	char initial = 'B';
	char currency = '$';

	// boolean (true or false)
	bool student = false;
	bool power = true;
	bool forSale = true;

	// string (object representing a sequence of text)
	std::string name = "Damian";
	std::string day = "Saturday";
	std::string drink = "jasmine tea";
	std::string address = "123 st street.";

	std::cout << "Hello " << name << std::endl;
	std::cout << "You are " << age << "years old" << std::endl;

	return 0;
}
