#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;

     while(t--){

         int n;
         cin>>n;

         string s = to_string(n);

         int fdigit = s[0] - 48;
         int ldigit = s[s.length() - 1] - '0';

         cout<<fdigit + ldigit<<endl;




     }
         
     
	return 0;
}
