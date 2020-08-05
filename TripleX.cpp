#include <iostream> //Preprocessor Directive

int main() //Main Function
{
    //Expression Statements
    std::cout << "You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout << "Enter the correct code to continue...";

    //Declaration Statements
    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    //Expression Statements
    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0; // Return Statement
}