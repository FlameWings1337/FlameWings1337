#include <iostream>

int main()
{
    unsigned short course_number, course_name;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите название курса (1 — programming, 2 — data science, 3 — web design): ";
    std::cin >> course_name;
    std::cout << "Введите номер курса (1, 2, 3): ";
    std::cin >> course_number;
    switch (course_name) {
    case 1:
        switch (course_name) {
        case 1:
            std::cout << "10:00" << std::endl;
            break;
        case 2:
            std::cout << "11:00" << std::endl;
            break;
        case 3:
            std::cout << "12:00" << std::endl;
            break;
        default:
            std::cout << "Invalid data" << std::endl;
        }
    case 2:
        switch (course_name) {
        case 1:
            std::cout << "13:00" << std::endl;
            break;
        case 2:
            std::cout << "14:00" << std::endl;
            break;
        case 3:
            std::cout << "15:00" << std::endl;
            break;
        default:
            std::cout << "Invalid data" << std::endl;
        }
    case 3:
        switch (course_name) {
        case 1:
            std::cout << "16:00" << std::endl;
            break;
        case 2:
            std::cout << "17:00" << std::endl;
            break;
        case 3:
            std::cout << "18:00" << std::endl;
            break;
        default:
            std::cout << "Invalid data" << std::endl;
        }
    default:
        std::cout << "Invalid data" << std::endl;
    }
}