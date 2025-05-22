#include <iostream>

int main() {
	int input;
	char exit;
	bool end, validchar = false;

	do {
		// Ask for the user to input a number.
		std::cout << "Input a number to find out if it's Even or Odd!\n";
		std::cin >> input;

		// Check if the number is odd by dividing by 2.
		if (input % 2 == 0) {
			// Divisible by 2: Even number.
			std::cout << input << " is an even number!\n\n";
		}
		else {
			// Not divisible by 2: Odd number.
			std::cout << input << " is an odd number!\n\n";
		};
		
		// Loop asking if the user wants to check another number.
		std::cout << "Want to check another number? (Y/N)\n";

		do {
			std::cin >> exit;
			validchar = false;

			// Checking if the input is a valid char.
			if (exit != 'y' && exit != 'Y' && exit != 'n' && exit != 'N') {
				std::cout << "Invalid selection. Did you want to check another number (Y/N)?\n";
			}
			else {
				validchar = true;
			};

		} while (not validchar);

		// Checking if the user wants to exit.
		end = (exit == 'y' or exit == 'Y');

	} while (end);

	return 0;
}