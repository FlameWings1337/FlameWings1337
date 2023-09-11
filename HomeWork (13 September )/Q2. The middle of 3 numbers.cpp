#include <iostream>

int main()
{
    int a, b, c;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите три числа: ";
    std::cin >> a >> b >> c;
    if (a > b && b > c || c > b && b > a)
        std::cout << "Число " << b << " является средним.";
    else if (b > a && a > c || c > a && a > b)
        std::cout << "Число " << a << " является средним.";
    else if (a > c && c > b || b > c && c > a)
        std::cout << "Число " << c << " является средним.";
}
