#include <iostream>

int main()
{
    unsigned short ans;
    setlocale(LC_ALL, "russian");
    std::cout << "2+2=?\n";
    std::cin >> ans;
    if (ans == 4)
        std::cout << "Верно!" << std::endl;
    else
        std::cout << "Ошибка!" << std::endl;
}
