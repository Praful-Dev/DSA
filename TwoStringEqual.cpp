#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        // declare array for s1 and s2
        int a[26] = {0};
        int b[26] = {0};

        int k = s1.length();

        for (int i = 0; i < k; i++)
        {
            int x = s1[i] - 97; //
            a[x]++;
            int y = s2[i] - 97;
            b[y]++;
        }
        int count = 0;
        // we got complete array a or b
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}