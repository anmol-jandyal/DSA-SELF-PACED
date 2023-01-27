#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;

    // base case
    if (n == 2 || n == 3)
        return true;

    int sqrtn = sqrt(n);

    if (n % 2 != 0 && n % 3 != 0)
    { // remove the multiples of 2 and 3 from the itereation

        int temp = 2;

        for (int i = 5; i <= sqrtn; i += temp)
        {
            if (n % i == 0)
                return false;

            temp = (temp == 2 ? 4 : 2);
        }
    }
    else
        return false;

    return true;
}

/*
 if (n % 2 != 0 && n % 3 != 0)
    { // remove the multiples of 2 and 3 from the itereation
        for (int i = 5; i <= sqrtn; i += 6)
        {
            if (n % i == 0||n%(i+2)==0)
                return false;
        }
    }
*/
/*
 if n is not divisible by 2 and 3 then we can ignore the multiples of 2 and 3
  as to become value of i
*/
// tc : O(sqrt(n))

int main()
{
    int a;
    cout << "enter no. :";
    cin >> a;

    cout << "is prime : " << isprime(a);
}