#include <bits/stdc++.h>
using namespace std;

int main()
{

    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second; // Pair
    cout << endl;

    pair<int, pair<int, int>> j = {1, {3, 9}};
    cout << j.first << " " << j.second.first << " " << j.second.second; // Mested Pair

    pair<int, int> newarr[] = {{1, 3}, {5, 7}, {9, 4}, {8, 3}, {10, 13}};
    cout << newarr[0].first;

    return 0;
}