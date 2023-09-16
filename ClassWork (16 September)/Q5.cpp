#include <iostream>

int main()
{
    unsigned short number;
    setlocale(LC_ALL, "russian");
    while (true) {
        std::cout << "Введите число от 1 до 100: ";
        std::cin >> number;
        switch (number / 10)
        {
        case 1:
            std::cout << 'X';
            break;
        case 2:
            std::cout << "XX";
            break;
        case 3:
            std::cout << "XXX";
            break;
        case 4:
            std::cout << "XL";
            break;
        case 5:
            std::cout << 'L';
            break;
        case 6:
            std::cout << "LX";
            break;
        case 7:
            std::cout << "LXX";
            break;
        case 8:
            std::cout << "LXXX";
            break;
        case 9:
            std::cout << "XC";
            break;
        case 10:
            std::cout << 'C';
            break;
        default:
            break;
        }
        switch (number % 10)
        {
        case 1:
            std::cout << 'I' << std::endl;
            break;
        case 2:
            std::cout << "II" << std::endl;
            break;
        case 3:
            std::cout << "III" << std::endl;
            break;
        case 4:
            std::cout << "IV" << std::endl;
            break;
        case 5:
            std::cout << 'V' << std::endl;
            break;
        case 6:
            std::cout << "VI" << std::endl;
            break;
        case 7:
            std::cout << "VII" << std::endl;
            break;
        case 8:
            std::cout << "VIII" << std::endl;
            break;
        case 9:
            std::cout << "XI" << std::endl;
            break;
        default:
            std::cout << std::endl;
            break;
        }
    }
}