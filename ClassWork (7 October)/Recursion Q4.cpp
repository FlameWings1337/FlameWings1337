#include <iostream>

unsigned short f(unsigned short);

int main()
{
    unsigned int n;
    std::cout << "Input function argument n: ";
    std::cin >> n;
    std::cout << "F(" << n << ") = " << f(n);
}

unsigned short f(unsigned short n) {
    if (n == 1) 
        return 2;
    if (n == 2)
        return 5;
    if (n > 2)
        return f(n - 1) * n + f(n - 2) * (n - 1);
}