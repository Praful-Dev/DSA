#include <bits/stdc++.h>
using namespace std;


int main() {
    int a = 2345;
    ostringstream str1;
    str1 << a;
    string s = str1.str();
    cout << s;
    cout << endl;
    cout << s[0];

    return 0;

}