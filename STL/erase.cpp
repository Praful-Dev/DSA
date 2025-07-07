#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator it = v.begin();
    v.push_back(10);
    v.push_back(15);
    v.push_back(30);
    v.emplace_back(25);
    v.emplace_back(40);
    v.emplace_back(55);
    //    10 15 30 25 40 55
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // erasing the vertor
    // 10 15 30 25  i'm ponting to begin + 1
    // v.erase(v.begin() + 1);

    for (auto it : v)
    {
        cout << it << " "; // 15 will delete
        // 10 30 25
    }
    cout << endl;
    v.erase(v.begin() + 1, v.begin() + 4); // 30 25 will delete

    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}