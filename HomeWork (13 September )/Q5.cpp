#include <iostream>

int main()
{
    char symbol;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите символ: ";
    std::cin >> symbol;
    if (symbol >= 65 && symbol <= 90 || symbol >= 97 && symbol <= 122)
        std::cout << "Это буква" << std::endl;
    else if (symbol < 48 || symbol > 57)
        std::cout << "Не символ" << std::endl;
}
