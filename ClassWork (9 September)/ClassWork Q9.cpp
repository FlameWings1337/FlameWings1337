#include <iostream>

int main()
{
    int number1, number2;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите 2 целых числа: ";
    std::cin >> number1 >> number2;
    if (number1 % number2 == 0)
        std::cout << number1 << "Делится на " << number2 << std::endl;
}