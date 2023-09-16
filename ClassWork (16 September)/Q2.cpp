#include <iostream>

int main()
{
    unsigned short Mark;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите оценку: ";
    std::cin >> Mark;
    switch (Mark) {
    case 2:
        std::cout << "Неудовлетворительно" << std::endl;
        break;
    case 3:
        std::cout << "Удовлетворительно" << std::endl;
        break;
    case 4:
        std::cout << "Хорошо" << std::endl;
        break;
    case 5:
        std::cout << "Отлично" << std::endl;
        break;
    default:
        std::cout << "Error" << std::endl;
    }
}