#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    int result = n & (n-1); 
    if(result == 0){
        cout<<"NUmber is Power of 2"<<endl;
    }
    else cout<<"Number is not power of 2"<<endl;
    
    
    return 0;
}