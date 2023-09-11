#include <iostream>

int main()
{
    setlocale(LC_ALL, "russian");
    std::cout << "Задание 1.\n";
    char ans_q1;
    std::cout << "Уроки сделаны?\n";
    std::cin >> ans_q1;
    if (ans_q1 == 'y' || ans_q1 == 'Y')
        std::cout << "Молодец!";
}

