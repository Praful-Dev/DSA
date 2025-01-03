#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :  ";
    cin >> n;
    int x;
    for (int i = 2; i <= n; i++)
    {
        x = i;
    int count = 0;
        for (int j = 1; j <= x; j++)
        {

            if (x % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << x << endl;
        }
    }
    return 0;
}