#include <iostream>
# include <vector>
// Typedefs are reserved keyworkds used to create additional names (aliases)
// for another data type
// Like a nickname
// New identifier for existing type
// Helps with readability and reduces typos
// Use this when there is a clear, specific benefit
// Has been replaced with 'using' as it works better with templates

// typedef std::vector<std::pair<std::string,int>> pairlist_t;

typedef std::string text_t;
using number_t = int;

int main(){

	text_t firstName = "Stephanie";
	number_t age = 19;

	std::cout << firstName << std::endl;
	std::cout << age << std::endl;

	return 0;
}
