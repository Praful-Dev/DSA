#include <bits/stdc++.h>

 using namespace std;

 int main(){


    int n =5;
    int x = n>>2;
    cout<<x<<endl;

    int y = 3;
    int z = ~y;
    cout<<z <<" NOT Operator"<<endl;


    int l = n&y;
    cout<<l<<" AND Operator"<<endl;
    int ll = n|y;    
    cout<<l<<" OR Operator"<<endl;
 }