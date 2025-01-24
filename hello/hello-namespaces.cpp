#include <iostream>
// Namespaces provide solutions for preventing name conflicts in large projects.
// Each entity needs a unique name
// Allows for identically named entities as long as the namespaces are different

namespace grayson{
	int x = 1;
}

namespace todd{
	int x = 2;
}

int main(){
	using namespace grayson;
	std::cout << x << std::endl;

	int x = 0;

	std::cout << todd::x << std::endl;
	
	

	return 0;
}

/* int main(){
	using std::cout;

	int x = 0;

	cout << todd::x << std::endl;
	
	

	return 0;
}
*/
