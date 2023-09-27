﻿// Q1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int array[3][3] = {};
    int sum = 0;
    int main_diag_sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 1; j <= 3; j++) {
            array[i][j - 1] = 3 * i + j;
            std::cout.width(3);
            std::cout << 3 * i + j;
            sum += array[i][j - 1];
            if (i + 1 == j) {
                main_diag_sum += array[i][j - 1];
            }
        }
        std::cout << "\n";
    }
    std::cout << "The middle element: " << array[1][1] << std::endl;
    std::cout << "All elements sum: " << sum << std::endl;
    std::cout << "Main diagonal elements sum: " << main_diag_sum << std::endl;
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
