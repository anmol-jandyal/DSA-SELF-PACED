#include <iostream>
using std::cout;

int GCD(int a, int b)
{
    while (a != b)
    {
        if (a < b)
            b = b - a;
        else
            a = a - b;
    }
    return a;
}

int main()
{
    int a = 45, b = 30;
    cout << GCD(a, b);

    return 0;
}