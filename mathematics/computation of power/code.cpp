#include <iostream>
using namespace std;

int pow(int x, int n)
{
    if (n == 0)
        return 1;

    int temp_pow = 1;

    if ((n & 1) == 1)
    { // odd
        temp_pow = pow(x, (int)(n / 2));
        return x * (temp_pow * temp_pow);
    }
    else
    { // even
        temp_pow = pow(x, n / 2);
        return (temp_pow * temp_pow);
    }
    return temp_pow;
}

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