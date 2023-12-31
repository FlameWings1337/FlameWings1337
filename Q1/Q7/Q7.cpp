﻿// Q7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int array[3][3] = {};
    int sum_now = 0;
    int index = 0;
    for (int i = 1; i <= 3; i++) {
        int sum_next = 0;
        for (int j = 1; j <= 3; j++) {
            array[i - 1][j - 1] = i * j;
            std::cout.width(3);
            std::cout << (float)i * j;
            sum_next += i * j;
        }
        if (sum_next > sum_now) {
            index = i;
            sum_now = sum_next;
        }
        std::cout << "\n";
    }
    std::cout << "Index: " << index << std::endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
