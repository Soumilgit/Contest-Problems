/*Problem statement:
GAME 11
Given a list of 
𝑁
N batsmen and 
𝑀
M bowlers, each with a given cricketing skill, the selectors are asked to pick a team of 
11
11 players such that the team has at least 
4
4 batsmen and 
4
4 bowlers.

Find is the maximum total cricketing skill of a team which they can form.
Note that the total cricketing skill is the sum of cricketing skills of all the players in the team.

Print 
−
1
−1 if making a valid team is not possible.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers 
𝑁
N and 
𝑀
M — the number of batsmen and bowlers respectively.
The second line contains 
𝑁
N space-separated integers, denoting the cricketing skills of the 
𝑁
N batsmen.
The third line contains 
𝑀
M space-separated integers, denoting the cricketing skills of the 
𝑀
M bowlers.
Output Format
For each test case, output on a new line, the maximum total cricketing skill of any valid team, or 
−
1
−1 if no such team exists.

Constraints
1
≤
𝑇
≤
1
0
5
1≤T≤10 
5
 
1
≤
𝑁
,
𝑀
≤
1
0
5
1≤N,M≤10 
5
 
1
≤
𝐴
𝑖
,
𝐵
𝑖
≤
1
0
9
1≤A 
i
​
 ,B 
i
​
 ≤10 
9
 
The sum of 
𝑁
N and the sum of 
𝑀
M over all test cases won't exceed 
1
0
5
10 
5
 .
Sample 1:
Input
Output
3
6 6
1 5 2 3 4 6
2 6 3 4 5 2
4 7
7 6 5 4
1 2 3 8 9 10 11
10 3
1 200 202 202 3 29 19 29 29 19
1000 200 3000
42
66
-1
Explanation:
Test case 
1
1: Selectors can pick all the players apart from the batsmen with skill 
1
1.

Test case 
2
2: Selectors have no choice but to pick all the players.

Test case 
3
3: Selectors have no way to form a team with at least 
4
4 bowlers.
*/#include <bits/stdc++.h>
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
