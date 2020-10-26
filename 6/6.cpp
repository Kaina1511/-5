#include <iostream>
using namespace std;

void mil()
{
    double m;
    cout << "Введите мили: ";
    cin >> m;
    setlocale(LC_ALL, "rus");
    double k = m * 1.609;
    double f = m * 5280;
    cout << "мили в км = " << k << "\n" << "мили в футах = " << f<<endl;
}
int main()
{
    setlocale(LC_ALL, "rus");
    mil();
    return 0;
}