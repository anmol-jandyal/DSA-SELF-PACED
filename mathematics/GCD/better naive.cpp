#include <iostream>
using std::cout;

int min(int a, int b)
{
    return (a < b ? a : b);
}

int GCD(int a, int b)
{
    int res = min(a, b);

    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

int main()
{
    int a = 45, b = 30;
    cout << GCD(a, b);

    return 0;
}

// time complexity: O(n)  n is the smallest no.
