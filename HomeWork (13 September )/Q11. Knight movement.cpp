#include <iostream>

int main()
{
    unsigned short Knight_placed_x1, Knight_placed_y1, Knight_goto_x2, Knight_goto_y2;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите местоположение коня (сперва клетку по горизонтали, затем по вертикали): ";
    std::cin >> Knight_placed_x1 >> Knight_placed_y1;
    std::cout << "Введите координаты куда нужно попасть коню на этом ходу (сперва клетку по горизонтали, затем по вертикали): ";
    std::cin >> Knight_goto_x2 >> Knight_goto_y2;
    if (Knight_placed_x1 == Knight_goto_x2 && Knight_placed_y1 == Knight_goto_y2) {
        std::cout << "Вы уже находитесь на этой клетке, сделайте ход в другое место!";
        exit;
    }
    if (Knight_placed_x1 < 1 || Knight_placed_x1 > 8 || Knight_placed_y1 < 1 || Knight_placed_y1 > 8) {
        std::cout << "Вы поставили коня вне доски, верните её на доску, пожалуйста!";
        exit;
    }
    if (Knight_goto_x2 < 1 || Knight_goto_x2 > 8 || Knight_goto_y2 < 1 || Knight_goto_y2 > 8) {
        std::cout << "Извините, но такой ход не возможен, поскольку выходит за рамки доски.";
        exit;
    }
    if (abs(Knight_placed_x1 - Knight_goto_x2) == 2 && abs(Knight_placed_y1 - Knight_goto_y2) == 1 || abs(Knight_placed_x1 - Knight_goto_x2) == 1 && abs(Knight_placed_y1 - Knight_goto_y2) == 2)
        std::cout << "Да" << std::endl;
    else
        std::cout << "Нет" << std::endl;
}
