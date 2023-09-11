#include <iostream>

int main() {
    setlocale(LC_ALL, "russian");
    std::cout << "\nЗадание 7. Товар по акции\n";
    int product_price, discount, total_product_price;
    std::cout << "Введите цену товара: ";
    std::cin >> product_price;
    std::cout << "Введите размер скидки: ";
    std::cin >> discount;
    total_product_price = product_price * (1 - (float)discount / 100);
    std::cout << "Цена товара с учётом скидки: " << total_product_price << std::endl;
    return 0;
}