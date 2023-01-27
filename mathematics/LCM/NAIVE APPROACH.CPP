#include <iostream>
using namespace std;

int LCM(int a, int b)
{
    int x = (a > b ? a : b);
    int y = (a > b ? b : a);

    // if one of the no. is multiple of other i.e greatest(x) is multiple of smallest(y)
    if (x % y == 0)
        return x;

    int i = 2;
    while ((x * i) % y != 0) // checking whether y divides multiple of greater(x)
    {
        i++;
    }

    return x * i;
}

/*
    int lcm(int a,int b){
        int res=max(a,b);
        while(1){
            if(res%a==0 && res%b==0)
                return res;
            res++;
        }
        return res;
    }

    time complexity: O(a*b - max(a,b))
*/
int main()
{
    int a, b;

    cin >> a >> b;

    cout << LCM(a, b);
    return 0;
}