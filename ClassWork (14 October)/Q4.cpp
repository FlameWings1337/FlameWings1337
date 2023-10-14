#include <iostream>

void print_arr(int*, int);
void q_sort(int*, int);

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

    q_sort(ptr, n);

    print_arr(ptr, n);

    delete[] ptr;
    return 0;
}

void q_sort(int* arr, int size) {
    int i = 0;
    int j = size - 1;

    int mid = arr[size / 2];

    do {
        while (arr[i] > mid)
            i++;

        while (arr[j] < mid)
            j--;

        if (i <= j) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;

            i++;
            j--;
        }
    } while (i <= j);

    if (j > 0)
        q_sort(arr, j + 1);

    if (i < size)
        q_sort(&arr[i], size - i);
}

void print_arr(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}