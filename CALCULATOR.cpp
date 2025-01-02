#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         double a,b;
         char op ;
         cin>>a>>b;
         cin>>op;
         
         if(op == '+'){
             cout<<a+b<<endl;
         }
         else if(op == '-'){
             cout<<a-b<<endl;
         }
         else if(op == '*'){
             cout<<a*b<<endl;
         }
         else if(op == '/'){
            if(a !=0){
                cout<<fixed<<setprecision(2)<<a/b<<endl;
            }
            else cout<<0<<endl;
             
         }
         
         
         
         
     }
	return 0;
}
