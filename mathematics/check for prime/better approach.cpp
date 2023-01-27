#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;

    int sqrtn = sqrt(n);

    for (int i = 2; i <= sqrtn; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

/*
    divisor appears in pairs :

     if(x,y) is a divisor pair
     then x*y = n;

    let  x<=y
    then  x*x <= n
    =>    x <= sqrt(n)

    so if no. is not prime then there exist any x that is <= sqrt(n)
*/
// tc : O(sqrt(n))

int main()
{
    int a;
    cin >> a;

    cout << "is prime : " << isprime(a);
}