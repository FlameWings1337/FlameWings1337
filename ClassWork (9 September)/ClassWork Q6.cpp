#include <iostream>

int main()
{
    unsigned int user_points;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите количество очков: ";
    std::cin >> user_points;
    if (user_points >= 10)
        std::cout << "Ты победил!";
}
