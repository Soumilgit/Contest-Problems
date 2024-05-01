#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,M;
	    cin>>N>>M;
	    if(N<4 || M<4 && (N+M)>11){
	        cout<<-1<<endl;
	        continue;
	    }
	        
	    int sum1=0;
	    
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	        sum1 = sum1 + A[i];
	    }
	    int sum2=0;
	    int a[M];
	    for(int j=0;j<M;j++){
	        cin>>a[j];
	    
	    
	        sum2 = sum2 + a[j];
	    }
	    if((N+M)==12){
	        cout<<(sum1+sum2-A[0])<<endl;
	        continue;
	    }
	    cout<<(sum1+sum2)<<endl;
	    }
	return 0;

}
