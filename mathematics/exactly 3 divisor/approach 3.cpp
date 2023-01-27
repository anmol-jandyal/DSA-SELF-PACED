// approach 3: square of prime no. is the no. which has exactly 3 divisors
/*
    :WE CHECK FOR THE NO. is prime or not if yes then we check the squar of
    the no. is exist in the given range if yes then add one to count
    if it is larger we come out of the loop and print the sol
*/
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {
        if (n == 1)
            return false;

        if (n == 2 || n == 3)
            return true;

        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (int i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }
    // time : O(n^(1/2))

    int exactly3Divisors(int n)
    {
        int sol = 0;

        for (int i = 2;; i++)
        {
            if (isPrime(i))
            {
                if (i * i <= n) // checking the square of prime is in range or not
                {
                    sol++;
                }
                else
                {
                    break;
                }
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