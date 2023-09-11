#include <iostream>

int main()
{
    unsigned short Queen_placed_x1, Queen_placed_y1, Queen_goto_x2, Queen_goto_y2;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите местоположение ферзя (сперва клетку по горизонтали, затем по вертикали): ";
    std::cin >> Queen_placed_x1 >> Queen_placed_y1;
    std::cout << "Введите координаты куда нужно попасть ферзю на этом ходу (сперва клетку по горизонтали, затем по вертикали): ";
    std::cin >> Queen_goto_x2 >> Queen_goto_y2;
    if (Queen_placed_x1 == Queen_goto_x2 && Queen_placed_y1 == Queen_goto_y2) {
        std::cout << "Вы уже находитесь на этой клетке, сделайте ход в другое место!";
        exit;
    }
    if (Queen_placed_x1 < 1 || Queen_placed_x1 > 8 || Queen_placed_y1 < 1 || Queen_placed_y1 > 8) {
        std::cout << "Вы поставили ферзя вне доски, верните её на доску, пожалуйста!";
        exit;
    }
    if (Queen_goto_x2 < 1 || Queen_goto_x2 > 8 || Queen_goto_y2 < 1 || Queen_goto_y2 > 8) {
        std::cout << "Извините, но такой ход не возможен, поскольку выходит за рамки доски.";
        exit;
    }
    if (Queen_placed_x1 == Queen_goto_x2 || Queen_placed_y1 == Queen_goto_y2 || abs(Queen_placed_x1 - Queen_goto_x2) == abs(Queen_placed_y1 - Queen_goto_y2))
        std::cout << "Да" << std::endl;
    else
        std::cout << "Нет" << std::endl;
}
