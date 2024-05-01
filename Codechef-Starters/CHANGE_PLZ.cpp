/*Problem statement:
Change Please
You just travelled in a cab and you owe the driver 
𝑋
X dollars.
However, you only have a 
100
100 dollar bill, and the driver only has 
10
10 dollar bills with which he can pay you back.

You hand the 
100
100 dollar bill to the driver. Find the maximum amount which the driver can pay back without giving more than he owes.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of a single integer 
𝑋
X, the amount you owe the driver.
Output Format
For each test case, output on a new line, the maximum amount which driver can pay back without giving more than he owes.

Constraints
1
≤
𝑇
≤
100
1≤T≤100
1
≤
𝑋
≤
100
1≤X≤100
Sample 1:
Input
Output
3
90
100
66
10
0
30
Explanation:
Test case 
1
1: Driver pays back the remaining 
100
−
90
=
10
100−90=10 dollars in form a 
10
10 dollar bill.

Test case 
2
2: Driver does not pay back any money since the fare is 
100
100.

Test case 
3
3: After receiving 
100
100 dollar bill, driver owes you 
100
−
66
=
34
100−66=34 dollars. Driver gives back three 
10
10 dollars bills.
*/
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
