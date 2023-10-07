#include <iostream>

unsigned short f(unsigned short);
unsigned short g(unsigned short);

int main()
{
    unsigned int n, m;
    std::cout << "Input F-function argument n: ";
    std::cin >> n;
    std::cout << "F(" << n << ") = " << f(n);
    std::cout << "Input G-function argument m: ";
    std::cin >> m;
    std::cout << "G(" << m << ") = " << g(m);
}

unsigned short f(unsigned short n) {
    if (n == 1) {
        return 0;
    }
    if (n > 1) {
        return f(n - 1) + n;
    }
}

unsigned short g(unsigned short m) {
    if (m == 1) {
        return 1;
    }
    if (m > 1) {
        return g(m - 1) * m;
    }
}