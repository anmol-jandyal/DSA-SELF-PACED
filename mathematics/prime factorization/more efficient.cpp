#include <iostream>
using namespace std;

// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;

//     if (n == 2 || n == 3)
//         return true;

//     // remove all the instance of i which is multiple of 2 and 3
//     for (int i = 5; i * i <= n; i += 6)
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }

void primeFactor(int n)
{
    // finding all 2 factord
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }
    // finding all 2 factord
    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n /= 3;
    }

    // finding all the prime factors (except 2's and 3's multiples)
    for (int i = 5; i * i <= n; i += 6)
    {

        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }

        while (n % (i + 2) == 0)
        {
            cout << (i + 2) << " ";
            n /= (i + 2);
        }
    }
    // for case when n is prime no.
    if (n > 1)
        cout << n << " ";
}

int main()
{
    int n;
    cout << "enter the no.:";
    cin >> n;

    primeFactor(n);

    return 0;
}

/*
    no. not multiple of 3 and 2
        5  7  11  13  17  19   23  25  29  ...........
         +2 +4  +2  +4  +2  +4   +2   +4
*/