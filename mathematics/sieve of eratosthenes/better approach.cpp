#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;

    for (int i = 5; (i * i) <= n; i += 6)
    {
        if ((n % i == 0) || (n % (i + 2) == 0))
        {
            return false;
        }
    }
    return true;
}

void SOE(int n)
{
    int arr[n + 1];
    // initialization
    for (int i = 0; i <= n; i++)
    {
        arr[i] = 1;
    }

    for (int i = 2; i * i <= n; i++) // as we know that x<=sqrtof n
    {
        if (arr[i] != 0)
        {
            for (int k = 2 * i; k <= n; k += i)
            {
                arr[k] = 0;
            }
        }
    }

    // print the array (prime no.s)
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] != 0)
            cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "enter n";
    cin >> n;

    SOE(n);
    return 0;
}