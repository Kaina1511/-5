#include <iostream>
using namespace std;

double grad(int g)
{
    const double pi = 3.14159;
    int v = 180;
    return v / pi* g;
}

int main()
{
    setlocale(LC_ALL, "rus");
    double r;
    cout << "Введите значение в радианах: " << endl;
    cin >> r;
    double i = grad(r);
    cout << "Значение в градусах = " << i<< endl;
    return 0;
}