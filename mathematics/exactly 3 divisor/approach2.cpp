#include <iostream>
using namespace std;

/*
//approach 2: we will calculate the divisors for no. in following way
/*
    : we run loop from 2 to sqrt(n)

    as divisors appears in pairs so for every i which divides n we add 2 divisors
    //but add only one if it is a perfect root i.e i*i ==n
*/
* /

    class Solution
{
public:
    int divisors(int n)
    {
        if (n == 1)
            return 1;

        int divs = 2;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i * i < n)
                {
                    // not perfect root i.e  pair exist and are different divisor
                    divs += 2;
                }
                else
                {
                    // i*i==n;
                    divs++;
                }
            }
        }
        return divs;
    }
    // time : O(sqrt(n))

    int exactly3Divisors(int n)
    {
        int sol = 0;
        for (int i = 1; i <= n; i++)
        {
            if (divisors(i) == 3)
                sol++;
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

// time : O(n^(3/2))