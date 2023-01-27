#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// tc : O(n/2)= O(n)

int main()
{
    int a;
    cin >> a;

    cout << "is prime : " << isprime(a);
}