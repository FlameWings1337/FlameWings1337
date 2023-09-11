#include <iostream>

int main()
{
    unsigned int number;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите натуральное число: ";
    std::cin >> number;
    if (number % 2 == 0 && number != 0)
        std::cout << "Число " << number << " — подходит.";
}
