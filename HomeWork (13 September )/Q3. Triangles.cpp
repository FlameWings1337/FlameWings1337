#include <iostream>

int main()
{
    int a, b, c;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите значение сторон треугольника: ";
    std::cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && a == c)
            std::cout << "Треугольник является равносторонним." << std::endl;
        else if (a == b || b == c)
            std::cout << "Треугольник является равнобедренным." << std::endl;
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            std::cout << "Треугольник является прямоугольным." << std::endl;
    }
}
