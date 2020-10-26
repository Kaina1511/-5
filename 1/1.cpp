#include <iostream>
using namespace std;
void pro(int i)
{
    bool p = true;
    for (int j = 2; j * j <= i; j++)
    {
        if (i % j == 0)
        {
            p = false;
            break;
        }
    }
    if (p) cout << i << " ";
}
int main()
{
    for (int i = 2; i < 200; i++)
    {
        pro(i);
    }
    return 0;
}