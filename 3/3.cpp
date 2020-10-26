#include <iostream>
using namespace std;
double sr(double a, double b, double c)
{
    return (a + b + c) / 3;
}
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, c;
    cout << "Введите 3 числа:" << endl;
    cin >> a >> b >> c;
    double i =sr(a,b,c);
    cout << "Среднее арифметическое этих чисел = " << i << endl;
    return 0;
}