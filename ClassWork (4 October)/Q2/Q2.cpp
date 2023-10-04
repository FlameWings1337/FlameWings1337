#include <iostream>
void createArray(int[10]);
void createMaxArray(int[10], int[10], int[10]);
void outputArray(int[10]);

int main()
{
    int mas1[10] = {},
        mas2[10] = {},
        mas3[10] = {};
    std::cout << "Input 10's elements of first massive: ";
    createArray(mas1);
    std::cout << "Input 10's elements of second massive: ";
    createArray(mas2);
    createMaxArray(mas1, mas2, mas3);
    outputArray(mas3);

}

void createArray(int array1[10]) {
    for (int i = 0; i < 10; i++) {
        std::cin >> array1[i];
    }
}

void outputArray(int array0[10]) {
    for (int i = 0; i < 10; i++) {
        std::cout << " " << array0[i];
    }
    std::cout << "\n";
}

void createMaxArray(int array0[10], int array1[10], int array2[10]) {
    for (int i = 0; i < 10; i++) {
        if (array0[i] >= array1[i])
            array2[i] = array0[i];
        else
            array2[i] = array1[i];
    }
}