
/*
    to calculate digits we can use the :
     idea : digit is n  is equal to lowest power of 10 such that n < 1
     eg: n=234  then n/10^3= 0.234 < 1


     digits in n= floor(log10(n)) + 1;

     log(n!)  =  log(1 *  2 *3 *4* 5* 6 * ........ * n)
      = log (1) + log(2)  + log(3) + log(4) + .... + log(n)

      digits in n!  = floor (log10(n!)) + 1
*/

#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    int digitsInFactorial(int n)
    {
        if (n == 0)
            return 1;

        int digits = 0;

        double logsum = 0;

        for (int i = 1; i <= n; i++)
        {
            logsum += log10(i);
        }

        digits = floor(logsum) + 1;
        return digits;
    }
};

int main()
{
    Solution obj;
    int n;
    cout << "enter n;";
    cin >> n;

    cout << "digits: " << obj.digitsInFactorial(n);
    return 0;
}