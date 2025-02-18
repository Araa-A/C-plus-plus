#include <iostream>

// The const keyword specifies that a variable's value is constant
// Tells the compiler to prevent anything from modifying it
// (read-only value)
// Adds data security
	
int main(){
	const double PI = 3.14159;
	double radius = 10;
	double circumference = 2 * PI * radius;
	const int LIGHT_SPEED = 299792458;
	const int WIDTH = 1920;
	const int HEIGHT = 1080;
	

	std::cout << circumference << "cm" << std::endl;
	return 0;
}
