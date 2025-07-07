#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(20);
    v.push_back(25);
    v.push_back(30);
    v.push_back(54);
    v.emplace_back(59);
    vector<int>::iterator it = v.begin();

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "Size of the vector is :" << endl;
    cout << v.size();

    return 0;
}