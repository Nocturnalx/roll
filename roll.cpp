#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>

int main(int argc, char *argv[]){

	int max = 100;

	if (argc > 1){

		// set up a stringstream variable named convert, 
		// initialized with the input from argv[1]	
		std::stringstream convert{ argv[1] };

		//do conv and check for completion
		if (!(convert >> max))
			max = 100;
	}

	srand((unsigned) time(NULL));

	int roll = rand() % max;

	std::cout << "Your roll: " << roll << "\n";

	return 0;
}
