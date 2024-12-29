#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(10);
    v.push_back(23);
    v.push_back(22);
    v.push_back(7);
    v.push_back(98);

    sort(v.begin(), v.end());

    v.pop_back();

    int k = v.size();

    for (int i = 0; i < k; i++)
    {
        cout << v[i] << "  " << endl;
    }

    return 0;
}