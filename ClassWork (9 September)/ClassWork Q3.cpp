#include <iostream>

int main()
{
    int number;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите число: ";
    std::cin >> number;
    if (number % 2 == 0)
        std::cout << "Число " << number << " — чётное.";
}
