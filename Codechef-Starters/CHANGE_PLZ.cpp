#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    if((100-X)%10==0){
	        cout<<(100-X)<<endl;
	        
	    }
	    else{
	        cout<<(100-X)-(100-X)%10<<endl;
	        
	    }
	}
	return 0;

}
