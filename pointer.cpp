#include<bits/stdc++.h>
using namespace std;
  //learning pointers
int* chaioder(int cups){
    int* orders = new int[cups];
    for(int i=0;i<cups;i++){
        orders[i] = (i+1)*5;
    }
    return orders;

    
}

int main(){
   
int cups =5;

int* totalorder = chaioder(cups);
for(int i=0;i<cups;i++){
    cout<<totalorder[i]<<" Cups of chai"<<endl;
}

delete[] totalorder;

    return 0;
}