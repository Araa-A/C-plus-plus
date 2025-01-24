#include <iostream>

// Order of precedence
// Parenthesis
// Multipulcation & Division
// Adding and Subtracting


int main(){

	int students = 20;

	students += 2;
	students++; // preferred method if only adding on one to a variable

	std::cout << students << std::endl;

	students -= 2;
	students--; // only subtracts one

	std::cout << students << std::endl;

	students *= 2;

	students /=2;

	students /=3; // floating point truncated

	students = 20;

	int remainder = students % 3;

	std::cout << remainder << std::endl;


	int mangoes = 6 - (5 + 4) * 3 / 2;

	std::cout << mangoes << std::endl;


	return 0;
}
