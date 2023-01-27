#include <cmath>
#include <iostream>
using namespace std;

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    if (n == 2 || n == 3)
        return 1;

    int sqrtn = sqrt(n);

    if (n % 2 != 0 && n % 3 != 0)
    {
        for (int i = 5; i <= sqrtn; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
                return 0;
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

void primeFactor(int n) // also efficient
{
    if (n <= 1)
    {
        return;
    }

    for (int i = 2; n != 1;)
    {
        if (isPrime(i) && n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        else
        {
            i++;
        }
    }
}

/*
    void primeFactor(int n){
        int x;

        for(i=2;i<(n/2);i++)
        {
            if(isPrime(i)){
                x=i;

                while(n%x==0)
                {
                    print(i);

                    x=x*i;    // for powers of i
                }
            }
        }
    }
*/
int main()
{
    int n;

    cout << "enter n: ";
    cin >> n;

    primeFactor(n);
}