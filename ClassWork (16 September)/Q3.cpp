#include <iostream>

int main()
{
    char op;
    int num1, num2;
    setlocale(LC_ALL, "russian");
    std::cout << "Введите вид операции, которуб нужно провести над двумя целыми числами: ";
    std::cin >> op;
    std::cout << "Введите эти 2 числа: ";
    std::cin >> num1 >> num2;
    switch (op) {
    case '+':
        std::cout << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 == 0) {
            std::cout << "Деление на 0" << std::endl;
            exit(0);
        }
        std::cout << (float)num1 / num2 << std::endl;
        break;
    default:
        std::cout << "Error" << std::endl;
    }
}