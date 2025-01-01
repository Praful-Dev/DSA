#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int a=0;
	    for(int i=0;i<s.size();i+=2){ // shifted by 2 coz we dont want to campare adjacent AB --> BA that why i= i+2 
	        if((s[i]=='A'&&s[i+1]=='A')||(s[i]=='B'&&s[i+1]=='B')){
	        a=1;break;
	        }
	    }
	    cout<<(a?"no":"yes")<<endl;
	}
	return 0;
}