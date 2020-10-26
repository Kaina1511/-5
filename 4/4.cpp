#include <iostream>
using namespace std;
double pl(double r)
{
    return 3.14 * r * r;
}
int main()
{
    setlocale(LC_ALL, "rus");
    double R;
    cout << "Введите радиус окружности: ";
    cin >> R;
   double i = pl(R);
    cout << "Площадь круга с заданным радиусом = " << i << "" << endl;
    return 0;
}