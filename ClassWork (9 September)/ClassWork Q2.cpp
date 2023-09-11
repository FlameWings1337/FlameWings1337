// ClassWork Q2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int number;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите число: ";
    std::cin >> number;
    if (number <= 0)
        std::cout << "Число " << number << " — отрицательное.";
}

