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

// write the no. n as the multiplication of powers of prime factors
void primeFactor(int n)
{
    int temp = 1;
    int i = 2;

    while (temp < n)
    {
        if (isPrime(i))
        {
            while (n % (temp * i) == 0)
            {
                cout << i << "  ";
                temp *= i;
            }
        }
        i++;
    }
}
// same as approach written in naive approach

/*
    we will check until the sqrt(n)

    for(i=2;i<=sqrt(n);i++){
        if(isPrime(i)){
            x=i;
            while(n%x==0)
            {
                print(i);
                x=x*i;
            }
        }
    }

    time complexity: O(sqrt(n)*n*logn)
*/
int main()
{
    int n;

    cout << "enter n: ";
    cin >> n;

    primeFactor(n);
}