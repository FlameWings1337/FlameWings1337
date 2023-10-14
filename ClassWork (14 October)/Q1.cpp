#include <iostream>

int main()
{
    int n, sum = 0;

    std::cout << "Input size of array: ";
    std::cin >> n;

    int* ptr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Input " << i + 1 << "'s array element: ";
        std::cin >> ptr[i];
    }

    for (int i = 0; i < n; i++) {
        sum += ptr[i];
    }
    std::cout << "Sum of array elements: " << sum << std::endl;
    delete[] ptr;

    return 0;
}