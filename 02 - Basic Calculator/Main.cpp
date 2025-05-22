#include <iostream>

int main() {
	
	int n1, n2;
	char op;
		
	std::cout << "\nInput the two operands:\n";
	std::cin >> n1 >> n2;

	std::cout << "\nInput the operation:\n";
	std::cin >> op;
		
    switch (op) {

    case '+':
        // If the operator is + do a summation.
        std::cout << n1 << " + " << n2 << " = " << n1 + n2 << std::endl;
        break;

    case '-':
        // If the operator is - do a substraction.
        std::cout << n1 << " - " << n2 << " = " << n1 - n2 << std::endl;
        break;

    case '*':
        // If the operator is * do a multiplication.
        std::cout << n1 << " * " << n2 << " = " << n1 * n2 << std::endl;
        break;

    case '/':
        
        if (n2 != 0) {
            // If the operator is / do a division.
            std::cout << n1 << " / " << n2 << " = " << n1 / n2 << std::endl;
        }
        else {
            std::cout << "Error! Can't divide by 0!" << std::endl;
        }
        break;
    default:
        // If the operator is other than +, -, * or /, error message is shown.
        std::cout << "Error! operator is not correct" << std::endl;
        break;
    }
	
	return 0;
}