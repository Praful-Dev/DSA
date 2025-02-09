#include <bits/stdc++.h>
using namespace std;
int main()
{

cout<<"Enter the NO :"<<endl;
int n; 
cin>>n;
bool a = n & (1<<4) ; // e.g 20 = 10100   4th bit is set=1=True
if( a == true){
    cout<<"yes!, Set"<<endl;
}
else {
    cout<<"Not Set"<<endl;
}




}