#include <iostream>

void F2C(float fahr) {
	// Converts from Fahr to Cels.
	std::cout << "This fahrenheit value: " << fahr << " in celsius is: " << (fahr - 32) * 5 / 9 << std::endl << std::endl;
}

void C2F(float cels) {
	// Converts from Cels to Fahr.
	std::cout << "This celsius value: " << cels << " in fahrenheit is: " << (cels * 9 / 5) + 32 << std::endl << std::endl;
}

int main() {
	int input;
	// While true loop checking for the input. It ends when the user's choice is "3. Exit".
	do{
		float temp;

		std::cout << "Welcome to the Fahrenheit-Celsius converter!\n1. Farhenheit to Celsius conversion.\n2. Celsius to Fahrenheit conversion.\n3. Exit.\n";
		std::cin >> input;
		switch(input){
			case 1:
				// Fahr to Cels conversion.
				std::cout << "Input your fahrenheit temperature:\n";
				std::cin >> temp;
				F2C(temp);
				break;
			case 2:
				// Cels to Fahr conversion.
				std::cout << "Input your celsius temperature:\n";
				std::cin >> temp;
				C2F(temp);
				break;

			case 3:
				// Exit.
				break;

			default: 
				// Throw an error.
				std::cout << "Error! Your input was not a valid choice!\n\n";
		}
	} while (input != 3);

	return 0;
}