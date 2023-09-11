#include <iostream>

int main()
{
    unsigned int a, b, c; // Стороны треугольника
    setlocale(LC_ALL, "russian");
    std::cout << "Введите значения сторон треугольника: ";
    std::cin >> a, b, c;
    if (a + b > c && b + c > a && a + c > b)
        std::cout << "Треугольник существует.";
}
