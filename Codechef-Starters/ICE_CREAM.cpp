/*Problem statement:
ICE CREAM
Chef wants to buy 
2
2 ice creams, each costing 
𝑋
X dollars, for him and Chefina.
However, he only has 
𝑌
Y dollars with him. Will he be able to buy 
2
2 ice creams?

Input Format
The only line of input will contain 
2
2 space-separated integers 
𝑋
X and 
𝑌
Y, the price of each ice cream and the money Chef has.
Output Format
Print YES if Chef will be able to buy two ice creams, otherwise print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints
1
≤
𝑋
,
𝑌
≤
100
1≤X,Y≤100*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X,Y;
	cin>>X>>Y;
	if(Y/X>=2){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	return 0;

}
