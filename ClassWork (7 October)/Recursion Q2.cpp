#include <iostream>

unsigned short f2(unsigned short);

int main()
{
    unsigned int n;
    std::cout << "Input function argument n: ";
    std::cin >> n;
    std::cout << "F(" << n << ") = " << f1(n);
}

unsigned short f1(unsigned short n) {
    if (n == 1) {
        return 1;
    }
    if (n > 1) {
        return f1(n - 1) * f1(n - 1) - f1(n - 1) * n + 2 * n;
    }
}