#include<iostream>

int main()
{
    char oper;
    float num1{0}, num2{0};


    std::cout << "Input operator (+, -, *, /): ";
    std::cin >> oper;

    std::cout << "Input number 1: ";
    std::cin >> num1;

    std::cout << "Input number 2: ";
    std::cin >> num2;

    switch (oper)
    {
    case '+':
        std::cout << "Result: " << num1 + num2 << '\n\n'; break;

    case '-':
        std::cout << "Result: " << num1 - num2 << '\n\n'; break;

    case '*':
        std::cout << "Result: " << num1 * num2 << '\n\n'; break;

    case '/':
        std::cout << "Result: " << num1 / num2  << '\n\n'; break;
    default :
        std::cout << "Operation invalid, please input again \n\n\n";

    }

}
