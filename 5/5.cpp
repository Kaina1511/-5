#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c, e;
    cout << "Введите пятизначное число:  ";
    cin >> a;
    cout << "\n\n";
    if (a >= 9999 && a <= 100000)
    {
        b = a / 10000;
        a = a % 10000;
        c = a / 1000;
        a = a % 1000;
        a = a % 100;
        e = a / 10;
        a = a % 10;
        if (b == a && c == e)
        {
            cout << "Это число палиндром";
        }
        else
            cout << "Это число не палиндром";
    }
    else
        cout << "Вы ввели не пятизначное число!!!";
    return 0;
}