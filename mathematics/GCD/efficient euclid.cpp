#include <iostream>
using std::cout;

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main()
{
    int a = 45, b = 30;
    cout << GCD(a, b);

    return 0;
}
