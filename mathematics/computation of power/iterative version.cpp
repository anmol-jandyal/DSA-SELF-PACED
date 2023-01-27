#include <iostream>
using namespace std;

int pow(int x, int n)
{
    if (n == 0)
        return 0;

    int res = 1;
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            res *= x;
        }
        n /= 2; //  n=n>>1;

        x = x * x; // x=x^(2*c)
    }
    return res;
}

// time : O(log n)
// space : o(1)
/*
    x=3
    n= 19   =  1     0    0   1    1

             3^16   3^8  3^4  3^2  3^1

*/

int main()
{
    int x, n;
    cout << "enter x:";
    cin >> x;
    cout << "enter power";
    cin >> n;

    cout << "\n\nPower : " << pow(x, n);

    return 0;
}