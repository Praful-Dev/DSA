#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(10);
    v.emplace_back(60);
    v.push_back(90);
    v.emplace_back(20);

    vector<int>::iterator it = v.begin();
    cout << *(it) << " ";
    it++;
    cout << *(it) << " ";
    cout << endl;

    vector<int>::iterator itr = v.end();
    itr--;
    cout << *itr;
    cout << endl;

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // for(int i=0; i< v.size(); i++){
    //   cout<<v[i]<<" ";

    // }

    return 0;
}