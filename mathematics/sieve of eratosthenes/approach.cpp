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
    if (n >= 2)
        cout << 2 << " ";
    if (n >= 3)
        cout << 3 << " ";

    // we can skip the values of i which is multiple of 2 and 3
    for (int i = 5; i <= n; i += 6)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
        if (((i + 2) <= n) && isPrime(i + 2))
        {
            cout << (i + 2) << " ";
        }
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

/*
    void SOE(int n){
        for(int i=2;i<=n;i++)
        {
            if(isPrime(i)){
                cout<<i<<" ";
            }
        }
    }

    time complexity: O(n*sqrt(n))
*/