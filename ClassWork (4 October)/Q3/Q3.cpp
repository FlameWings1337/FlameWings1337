#include <iostream>
#include <tuple>
#include <math.h>

using namespace std;

float pointsDistance(tuple<float, float>, tuple<float, float>);

int main()
{
    float x1, y1, x2, y2, distance;
    tuple<float, float> A, B;
    std::cout << "Inputs point A coordinates (x, y): ";
    std::cin >> x1 >> y1;
    A = make_tuple(x1, y1);
    std::cout << "\nInputs point B coordinates (x, y): ";
    std::cin >> x2 >> y2;
    B = make_tuple(x2, y2);
    distance = pointsDistance(A, B);
    cout << distance << endl;
}

float pointsDistance(tuple<float, float> A, tuple<float, float> B) {
    float distance;
    distance = sqrt(pow(get<0>(B) - get<0>(A), 2) + pow(get<1>(B) - get<1>(A), 2));
    return distance;
}
