#include <iostream>
#include <cmath>
using namespace std;

// concept : divisor always appears in pairs
// if we multiply them we get the given no.
void allDivisor(int n)
{
    float sqrtofn = sqrt(n);

    for (int i = 1; i < sqrtofn; i++) // sqrt is not inclusive ex: if n = 25 then sqrt(25)  ==5 :: it is not included here
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    // printing divisor in range sqrt of n to n
    for (int i = sqrtofn; i >= 1; i--) // sqrt is inclusive
    {
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
}
// time: O(sqrtof n)

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;

    allDivisor(n);
}

/*
void allDivisor(int n)
{
  int i;
    for ( i = 1; i*i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    //i = floor(sqrt(n)) + 1
    // printing divisor in range  (inclusive)sqrt(n) to  (inclusive)n
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
}
*/