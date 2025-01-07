#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){

if(a == 0){
    return b;

}

return gcd(b%a,a);


}

int main(){

cout<<"Enter the two number "<<endl;
int n,m;
cin>>n>>m;

int result = gcd(n,m);
cout<<result<<endl;




    return 0;
}