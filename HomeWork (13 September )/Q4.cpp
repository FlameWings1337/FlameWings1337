#include <iostream>

int main()
{
    unsigned short user_year;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите нужный год: ";
    std::cin >> user_year;
    if (user_year % 4 == 0 && user_year / 100 % 4 == 0)
        std::cout << "Високосный" << std::endl;
    else
        std::cout << "Не високосный" << std::endl;
}
