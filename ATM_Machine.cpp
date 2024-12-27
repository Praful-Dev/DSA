#include <bits/stdc++.h>
using namespace std;

int main()
{

    int amount;
    double balance;

    cin >> amount;
    cin >> balance;
    double remain;

    if (amount % 5 == 0)
    {
        if (amount < balance && amount + 0.5 <= balance)
        {

            remain = balance - amount - (0.5);
            cout << remain << setprecision(2) << endl;
        }
        else
        {
            cout << "Invalid Entry" << endl;
        }
    }
    else
    {
        cout << balance << setprecision(2) << endl;
        cout << "Working Now" << endl;
    }
    
    
}