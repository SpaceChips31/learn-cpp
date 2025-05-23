#include <iostream>

int main() {
	int count, sum, n = 0;

	do {
		std::cout << "Input how many numbers you want to find the average of:\n";
		std::cin >> count;

		if (count < 0)
			std::cout << "Choose a number greater than 0.\n\n";
	} while (count <= 0);

	// For cycle to input one number at a time.
	std::cout << "Input one number a time and press enter until you reach: "<< count << " numbers.\n";
	for (int i = 0; i < count; i++) {	

		std::cin >> n;
		sum =+ n;
	}
	// Final output.
	std::cout << "The average of these numbers is: " << (sum / count) << std::endl;

	return 0;
}