#include <iostream>
using namespace std;

int GCD(int a, int b) // ECULID ALGO ITERATIVE VERSION
{
    int r = 0;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    cout << a;
    return a;
}

int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << LCM(a, b);
    return 0;
}
