#include <iostream>

int main()
{
    int number;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите число: ";
    std::cin >> number;
    if (number % 10 == 5 || number % 10 == -5)
        std::cout << "Число " << number << " — заканчивается на 5.";
}
