#include <iostream>

int main()
{
    unsigned short Square_placed_x1, Square_placed_y1, Square_goto_x2, Square_goto_y2;
    setlocale(LC_ALL, "russian");
    while (true) {
        std::cout << "Введите местоположение клетки (сперва клетку по горизонтали, затем по вертикали): ";
        std::cin >> Square_placed_x1 >> Square_placed_y1;
        std::cout << "Введите координаты другой клетки (сперва клетку по горизонтали, затем по вертикали): ";
        std::cin >> Square_goto_x2 >> Square_goto_y2;
        if (Square_placed_x1 == Square_goto_x2 && Square_placed_y1 == Square_goto_y2) {
            std::cout << "Это одна и та же клетка, выбирите другую.";
            exit;
        }
        if (Square_placed_x1 < 1 || Square_placed_x1 > 8 || Square_placed_y1 < 1 || Square_placed_y1 > 8) {
            std::cout << "Вы выбрали начальную клетку вне доски!";
            exit;
        }
        if (Square_goto_x2 < 1 || Square_goto_x2 > 8 || Square_goto_y2 < 1 || Square_goto_y2 > 8) {
            std::cout << "Извините, но вторая выбранная клетка находится вне доски, выберите другую.";
            exit;
        }
        if (Square_placed_x1 % 2 == Square_placed_y1 % 2 == Square_goto_x2 % 2 == Square_goto_y2 % 2) // если у каждой координат равны их чётности, то это чёрная клетка
            std::cout << "Да" << std::endl;
        else
            std::cout << "Нет" << std::endl;
    }
}