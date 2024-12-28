#include<bits/stdc++.h>
using namespace std;
//learning 2D array


int main(){

int chaisales[3][2] ={
    {23 ,45},
    {54 ,87},
    {67 ,89}
};

for(int i=0;i<3;i++){
cout<<"Day "<<i+1<<endl;
for(int j=0;j<2;j++){
    cout<<"Chai sold: "<<chaisales[i][j]<<endl;

}
}

    return 0;
}


