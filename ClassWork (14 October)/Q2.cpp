#include <iostream>
#include <malloc.h>

void print_arr(int*, int);

int main()
{
    int n, arif_even = 0, arif_odd = 0, sum = 0;

    std::cout << "Input size of array: ";
    std::cin >> n;

    int* ptr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Input " << i + 1 << "'s array element: ";
        std::cin >> ptr[i];
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            arif_even += ptr[i];
        else
            arif_odd += ptr[i];
    }
    
    std::cout << "Arif_even = " << (float)arif_even / (n / 2) << std::endl;
    std::cout << "Arif_odd = " << (float)arif_odd / (n / 2 + 1) << std::endl;
    if ((float)arif_even / (n / 2) > (float)arif_odd / (n / 2 + 1)) {
        for (int i = 0; i < n; i++) {
            if (ptr[i] % 2 == 1)
                ptr[i] += 1;
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (ptr[i] % 2 == 0)
                ptr[i] -= 1;
        }
    }

    print_arr(ptr, n);

    delete[] ptr;

    return 0;
}

void print_arr(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}