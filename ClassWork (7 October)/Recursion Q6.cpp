#include <iostream>

unsigned short f(unsigned short, unsigned short);

int main()
{
    unsigned int n, m;
    std::cout << "Inputs two function arguments n and m: ";
    std::cin >> n >> m;
    std::cout << "F(" << n << ", " << m << ") = " << f(n, m);
}

unsigned short f(unsigned short n, unsigned short m) {
    if (n == 0)
        return m + 1;
    if (n != 0 && m == 0)
        return f(n - 1, 1);
    if (n > 0 && m > 0)
        return f(n - 1, f(n, m - 1));
}