#include <iostream>

int power(int, int);

int main()
{
    int a, n, p;
    std::cout << "Input number a, which will be raise to the power n:\na = ";
    std::cin >> a;
    std::cout << "Input n:\nn = ";
    std::cin >> n;

    p = power(a, n);
    std::cout << "a to the power n is equal to " << p << std::endl;
}

int power(int a, int n) {
    int y = a;
    for (int i = 2; i <= n; i++) {
        y *= a;
    }
    return y;
}