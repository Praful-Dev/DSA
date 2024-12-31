#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z; // X*5   Y*10
        cin>>x>>y>>z;
        int t_rupee = x*5 + y*10;
        
        int t_choco = t_rupee/z;
        cout<<t_choco<<endl;
    }
	

}
