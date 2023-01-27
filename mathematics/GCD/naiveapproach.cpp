#include <iostream>
using std::cout;

int GCD(int a, int b)
{
    int gcdno;

    if (a == b)
        return a;
    else if (a < b)
    {
        if (b % a == 0)
            return a;

        for (int i = 1; i <= (a / 2); i++)
        {
            if (a % i == 0 && b % i == 0)
                gcdno = i;
        }
    }
    else
    {
        if (a % b == 0)
            return b;

        for (int i = 1; i <= (a / 2); i++)
        {
            if (a % i == 0 && b % i == 0)
                gcdno = i;
        }
    }
    return gcdno;
}

int main()
{
    int a = 45, b = 30;
    cout << GCD(a, b);

    return 0;
}

// time complexity: O(n)  where n == smallest no./2