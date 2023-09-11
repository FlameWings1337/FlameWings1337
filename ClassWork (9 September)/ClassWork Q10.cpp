#include <iostream>

int main()
{ 
    unsigned short number;
    unsigned short sum_digits = 0;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите трехзначное целое число: ";
    std::cin >> number;
    sum_digits = number % 10 + number / 10 % 10 + number / 100;
    if (sum_digits > 9)
        std::cout << "Сумма цифр: " << sum_digits;
}