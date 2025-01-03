#include<bits/stdc++.h>
using namespace std;
 
void  eratos(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int i=2; i*i<=n;i++){ // i=2; 4<=10; 2=2+1;
        if(prime[i]==true){   // prime[2] true because of memset;
            for(int j=i*i; j<=n;j+=i){ // 2*2=4; 4<=10; 4=4+2; 
                prime[j]=false;         // prime[4] false
            }

        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }



 }
 
 
 
 int main(){

cout<<"Enter the upper limit: "<<endl;
int n;
cin>>n;
eratos(n);









 }