#include <iostream>

int main() {
	int n, limit, result;
	n = -1;

	// Loop if the user inputs a negative number.
	do {
		std::cout << "Enter the number for the multiplication table:\n";
		std::cin >> n;

		std::cout << "Enter how many rows to display:\n";
		std::cin >> limit;
		// Check if the number is positive.
		if (n > 0 && limit > 0) {
			std::cout << "Multiplication table of " << n << " up to " << limit << " is:\n----------\n";
			
			// Loop to print every line.
			for (int i = 1; i <= limit; i++) {
				std::cout << n << " x " << i << " = " << n * i << std::endl;
			}
		}
		else {
			if (n < 0)
				std::cout << "Insert a number above 0!\n";
			else  
				std::cout << "Insert a positive number of rows!\n";
				
			n = -1;
		};
	} while (n < 0);

	return 0;
}