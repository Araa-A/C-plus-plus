#include <iostream>

// Converting one data type to another
// 		Implicit = done automatically
//		Explicit = precede value with new data type (int)

int main(){

	double x = (int) 3.14;

	std::cout << x << std::endl;

	std::cout << (char) 100<< std::endl; //Explicit

	int correct = 8;

	int questions = 10;

	double score = correct/(double)questions * 100;

	std::cout << score << "%" << std::endl; 



	return 0;
}
