#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string n;
        getline(cin, n);

        stringstream ss(n);
        string word;
        int count = 0;
        while (ss >> word)
        {
            
        if (word == "not")
        {
            count++;
            break;
        }
        }
        if(count == 1){
            cout << "Real Fancy" << endl;
        }
        else{
            cout << "regularly fancy" << endl;
        }
    }
    return 0;
}
