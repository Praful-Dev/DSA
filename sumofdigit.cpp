#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;                               // taking number of test cases
    while (t--)                             // running the test cases until t is zero so t will run from t then t-- then t-- and so on until it becomes 0
    {
        int n;
        cin >> n;                           // taking the value of n

        ostringstream str1;                  // ostringstream converts int to string
        str1 << n;                           // putting our int value --> n in str1
        string s = str1.str();               // converting str1 to string and storing it in s variable
        long long int sum = 0;               // taking sum as 0 because we have to add all the digits
        for (int i = 0; i < s.length(); i++) // running the loop from 0 to the length of the string
        {
            sum += s[i] - 48;                // sum = sum + s[i] - 48  | 48 is the ascii value of 0 so we are subtracting it
                                             // let say for example if s[i] = '4' then s[i] - 48 ---> 52 - 48 = 4 <-- is now integer | 4 ==> 52 achi value
                                             // 4 is stored in sum then suming it with next digit
        }
        cout << sum << endl;
    }

    return 0;
}