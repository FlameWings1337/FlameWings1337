#include <iostream>

int main()
{
    float x, y; // Координаты точки
    setlocale(LC_ALL, "russian");
    while (true){
    std::cout << "Введите координаты точки (x, y): ";
        std::cin >> x >> y;
        if (x > 0 && y > 0)
            std::cout << "Точка лежит в I координатной четверти";

        if (x < 0 && y > 0)
            std::cout << "Точка лежит в II координатной четверти";

        if (x < 0 && y < 0)
            std::cout << "Точка лежит в III координатной четверти";

        if (x > 0 && y < 0)
            std::cout << "Точка лежит в IV координатной четверти";

        if (x == 0)
            std::cout << "Точка лежит на оси абсцисс";

        if (y == 0)
            std::cout << "Точка лежит на оси ординат";

        std::cout << std::endl;
    }
}
