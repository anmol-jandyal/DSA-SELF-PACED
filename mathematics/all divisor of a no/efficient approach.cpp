#include <iostream>
#include <cmath>
using namespace std;

// concept : divisor always appears in pairs
// if we multiply them we get the given no.
void allDivisor(int n)
{
    int k = -1, sqrtofn = sqrt(n);
    int arr[sqrtofn];

    for (int i = 1; i <= sqrtofn; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if ((n / i) != i) // to avoid printing same divisor twice
            {
                k++;
                arr[k] = n / i;
            }
        }
    }

    // printing the divisor in the array
    for (; k >= 0; k--)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;

    allDivisor(n);
}

// time com: O(sqrt(n))
// auxillary space : theta(sqrt(n))