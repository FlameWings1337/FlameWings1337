#include <iostream>

int main()
{
    int n, min, max;

    std::cout << "Input size of array: ";
    std::cin >> n;

    int* ptr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Input " << i + 1 << "'s array element: ";
        std::cin >> ptr[i];
    }
    min = ptr[0];
    max = ptr[-1];
    for (int i = 0; i < n; i++) {
        if (min > ptr[i])
            min = ptr[i];

        if (max < ptr[i])
            max = ptr[i];
    }
    std::cout << "max element: " << max << "\nmin element: " << min << std::endl;
}