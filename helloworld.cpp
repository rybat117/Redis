#include <iostream>

int main() {

    // my first C++ code

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "****** CALCULATOR ******\n";

    std::cout << "Enter either (+ - * / ): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    std::cout << "test changes!";

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;

        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "The specified operation is invalid!\n";
            break;
    }

    std::cout << "************************\n";

    return 0;
}