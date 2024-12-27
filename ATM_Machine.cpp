#include<bits/stdc++.h>
using namespace std;


/**
 * @brief This program takes two inputs from the user, an integer amount and a double balance.
 * It then subtracts the amount from the balance and prints the remaining balance if the amount is a multiple of 5 and the balance is enough to cover it.
 * If the amount is not a multiple of 5, or the balance is not enough to cover the amount, it prints the original balance.
 */
int main(){

int amount;
double balance;

cin>>amount;
cin>>balance;
double remain;

if(amount%5==0){
    if(amount < balance && amount + 0.5 <= balance){

        remain = balance - amount -(0.5);
        cout<<remain<<setprecision(2)<<endl;
    }
    else{
        cout<<"Invalid Entry"<<endl;
    }  


}
else{
 cout<<balance<<setprecision(2)<<endl;   
}





}