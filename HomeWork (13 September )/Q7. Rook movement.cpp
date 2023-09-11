#include <iostream>

int main()
{
    unsigned short Rook_placed_x1, Rook_placed_y1, Rook_goto_x2, Rook_goto_y2;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите местоположение ладьи (сперва клетку по горизонтали, затем по вертикали): ";
    std::cin >> Rook_placed_x1 >> Rook_placed_y1;
    std::cout << "Введите координаты куда нужно попасть ладье на этом ходу (сперва клетку по горизонтали, затем по вертикали): ";
    std::cin >> Rook_goto_x2 >> Rook_goto_y2;
    if (Rook_placed_x1 == Rook_goto_x2 && Rook_placed_y1 == Rook_goto_y2) {
        std::cout << "Вы уже находитесь на этой клетке, сделайте ход в другое место!";
        exit;
    } 
    if (Rook_placed_x1 < 1 || Rook_placed_x1 > 8 || Rook_placed_y1 < 1 || Rook_placed_y1 > 8) {
        std::cout << "Вы поставили ладью вне доски, верните её на доску, пожалуйста!";
        exit;
    }
    if (Rook_goto_x2 < 1 || Rook_goto_x2 > 8 || Rook_goto_y2 < 1 || Rook_goto_y2 > 8) {
        std::cout << "Извините, но такой ход не возможен, поскольку выходит за рамки доски.";
        exit;
    }
    if (Rook_placed_x1 == Rook_goto_x2 || Rook_placed_y1 == Rook_goto_y2)
        std::cout << "Да" << std::endl;
    else
        std::cout << "Нет" << std::endl;
}
