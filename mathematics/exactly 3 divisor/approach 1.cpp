#include <iostream>
using namespace std;

/*
    we traverse all the no.s from 1 to n
    and calculate the divisors for each no.
        : we traverse form 2 to n/2 and check which divides it and add one to the divisor
        : every no. has atleast two divisors : 1 and itself
*/

class Solution
{
public:
    int divisors(int n)
    {
        if (n == 1)
            return 1;

        // as any no. greater than 1 has atleast 2 divisor i.e 1 and itself
        int divs = 2;

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                divs++;
        }
        return divs;
    }
    // time : O(n)

    int exactly3Divisors(int n)
    {
        // Your code here

        int sol = 0;

        for (int i = 1; i <= n; i++)
        {
            if (divisors(i) == 3)
            {
                sol++;
            }
        }
        return sol;
    }
};

int main()
{
    Solution obj;
    int n;
    cout << "enter n";
    cin >> n;

    cout << "count: " << obj.exactly3Divisors(n);
    return 0;
}

// time : O(n^2)