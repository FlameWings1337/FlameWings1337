#include <iostream>

int main()
{
    unsigned short Bishop_placed_x1, Bishop_placed_y1, Bishop_goto_x2, Bishop_goto_y2;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите местоположение слона (сперва клетку по горизонтали, затем по вертикали): ";
    std::cin >> Bishop_placed_x1 >> Bishop_placed_y1;
    std::cout << "Введите координаты куда нужно попасть слону на этом ходу (сперва клетку по горизонтали, затем по вертикали): ";
    std::cin >> Bishop_goto_x2 >> Bishop_goto_y2;
    if (Bishop_placed_x1 == Bishop_goto_x2 && Bishop_placed_y1 == Bishop_goto_y2) {
        std::cout << "Вы уже находитесь на этой клетке, сделайте ход в другое место!";
        exit;
    }
    if (Bishop_placed_x1 < 1 || Bishop_placed_x1 > 8 || Bishop_placed_y1 < 1 || Bishop_placed_y1 > 8) {
        std::cout << "Вы поставили слона вне доски, верните её на доску, пожалуйста!";
        exit;
    }
    if (Bishop_goto_x2 < 1 || Bishop_goto_x2 > 8 || Bishop_goto_y2 < 1 || Bishop_goto_y2 > 8) {
        std::cout << "Извините, но такой ход не возможен, поскольку выходит за рамки доски.";
        exit;
    }
    if (abs(Bishop_placed_x1 - Bishop_goto_x2) == abs(Bishop_placed_y1 - Bishop_goto_y2))
        std::cout << "Да" << std::endl;
    else
        std::cout << "Нет" << std::endl;
}
