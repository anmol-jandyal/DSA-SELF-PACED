#include <iostream>
using namespace std;

void allDivisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}

// time: O(n)
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;

    allDivisor(n);
}