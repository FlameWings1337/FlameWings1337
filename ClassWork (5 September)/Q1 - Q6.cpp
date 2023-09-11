#include <iostream>

int main()
{
    //Q1. Matrix
    setlocale(LC_ALL, "russian");
    std::cout << "Задание 1. Матрица\n";
    std::cout << "— Ты веришь в судьбу, Нео?\n— Нет.\n— Почему?\n— Неприятно думать, что тобой манипулируют.\n";
    std::cout << "\nЗадание 2. Прямоугольник\n";
    int height = 5, width = 8, area, perimeter;
    area = height * width;
    perimeter = 2 * (height + width);
    std::cout << "Периметр прямоугольника: " << perimeter << "\nПлощадь прямоугольника: " << area << std::endl;
    std::cout << "\nЗадание 3. Отель\n";
    int weekday_price = 3500, weekend_price = 4000, current_day = 2, hotel_time = 6, cost = 0;
    for (int i = current_day; i <= current_day + hotel_time; i++) {
        if ((i % 7 <= 5) && (i % 7 > 0))
            cost += weekday_price;
        else
            cost += weekend_price;
    }
    std::cout << "Цена за проживание: " << cost;
    std::cout << "\nЗадание 4. Багаж\n";
    int suitcase = 15, bag = 10;
    float stroller = 5.5;
    float total_weight;
    total_weight = 2 * suitcase + bag + stroller;
    std::cout << "Общий вес багажа: " << total_weight << "кг.\n";
    std::cout << "\nЗадание 5. Арифметика\n";
    int a = 5, b = 2;
    std::cout << "Сумма a и b: " << a + b << std::endl;
    std::cout << "Разность a и b: " << a - b << std::endl;
    std::cout << "Произведение a и b: " << a * b << std::endl;
    std::cout << "Частное a и b: " << (float)a / b << std::endl;
    std::cout << "\nЗадание 6. Программисты\n";
    int Misha = 1, Sasha = 1, Vanya = 0;
    if ((Sasha || Vanya) && Misha)
        std::cout << "1\n";
    else
        std::cout << "0\n";
    return 0;
}