#include <iostream>

int main()
{
    int a, b, c;
    setlocale(LC_ALL, "russian");
    std::cout << "������� �������� ������ ������������: ";
    std::cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && a == c)
            std::cout << "����������� �������� ��������������." << std::endl;
        else if (a == b || b == c)
            std::cout << "����������� �������� ��������������." << std::endl;
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            std::cout << "����������� �������� �������������." << std::endl;
    }
}
