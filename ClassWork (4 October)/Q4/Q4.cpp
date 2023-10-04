#include <iostream>

int main()
{
    unsigned int n, i;
    std::cout << "Input natural number n greater than 1: ";
    std::cin >> n;
    if (n <= 1) {
        std::cout << "You inputted number less or equal to 1, try it again";
        exit(0);
    }
    for (i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            std::cout << "-\n";
            break;
        }
    }
    if (i == (int)sqrt(n) + 1)
        std::cout << "+\n";
}