#include <iostream>

int main()
{
    unsigned short finger_number;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите номер пальца на руке (для условности большой палец находится слева): ";
    std::cin >> finger_number;
    switch (finger_number) {
    case 1:
        std::cout << "Большой" << std::endl;
        break;
    case 2:
        std::cout << "Указательный" << std::endl;
        break;
    case 3:
        std::cout << "Средний" << std::endl;
        break;
    case 4:
        std::cout << "Безымянный" << std::endl;
        break;
    case 5:
        std::cout << "Мизинец" << std::endl;
        break;
    default:
        std::cout << "Error" << std::endl;
    }
}