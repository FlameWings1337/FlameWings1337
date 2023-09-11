#include <iostream>

int main()
{
    unsigned short King_placed_x1, King_placed_y1, King_goto_x2, King_goto_y2;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите местоположение короля (сперва клетку по горизонтали, затем по вертикали): ";
    std::cin >> King_placed_x1 >> King_placed_y1;
    std::cout << "Введите координаты куда нужно попасть королю на этом ходу (сперва клетку по горизонтали, затем по вертикали): ";
    std::cin >> King_goto_x2 >> King_goto_y2;
    if (King_placed_x1 == King_goto_x2 && King_placed_y1 == King_goto_y2) {
        std::cout << "Вы уже находитесь на этой клетке, сделайте ход в другое место!";
        exit;
    }
    if (King_placed_x1 < 1 || King_placed_x1 > 8 || King_placed_y1 < 1 || King_placed_y1 > 8) {
        std::cout << "Вы поставили короля вне доски, верните её на доску, пожалуйста!";
        exit;
    }
    if (King_goto_x2 < 1 || King_goto_x2 > 8 || King_goto_y2 < 1 || King_goto_y2 > 8) {
        std::cout << "Извините, но такой ход не возможен, поскольку выходит за рамки доски.";
        exit;
    }
    if (abs(King_placed_x1 - King_goto_x2) <= 1 && abs(King_placed_y1 - King_goto_y2) <= 1)
        std::cout << "Да" << std::endl;
    else
        std::cout << "Нет" << std::endl;
}
