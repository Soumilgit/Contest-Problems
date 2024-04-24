/*
You are given an array 
�
A of length 
�
N, and an integer 
�
K.
You can perform the following operation:

Choose any index 
�
i (
1
≤
�
≤
�
1≤i≤N), and increase 
�
�
A 
i
​
  by 
�
K.
Find the minimum possible value of 
max
⁡
(
�
)
−
min
⁡
(
�
)
max(A)−min(A) attainable, if you can perform this operation as many times as you like (possibly, zero times).

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains two space-separated integers 
�
N and 
�
K — the length of the array and the parameter 
�
K.
The second line contains 
�
N space-separated integers 
�
1
,
�
2
,
…
,
�
�
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
  — the initial values of the array elements.
Output Format
For each test case, output on a new line the answer: the minimum possible value of 
max
⁡
(
�
)
−
min
⁡
(
�
)
max(A)−min(A) if you can perform the given operation any number of times.

Constraints
1
≤
�
≤
1
0
5
1≤T≤10 
5
 
1
≤
�
≤
2
⋅
1
0
5
1≤N≤2⋅10 
5
 
1
≤
�
≤
1
0
9
1≤K≤10 
9
 
1
≤
�
�
≤
1
0
9
1≤A 
i
​
 ≤10 
9
 
The sum of 
�
N over all test cases won't exceed 
2
⋅
1
0
5
2⋅10 
5
 .
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	// your code goes here
	int testcases;
	cin>>testcases;
	for(int f=1;f<=testcases;f++){
	    int N;
	    long long K;
	    cin>>N>>K;
	    vector<long long>A(N);
	    for(int o=0;o<N;o++){
	        cin>>A[o];
	    }
	    sort(A.begin(),A.end());
	    long long max_value=A[N-1];
	    for(int o=0;o<N-1;o++){
	        long long tmp = (max_value - A[o])/K;
	        A[o] = A[o] + (tmp*K);
	        
	    }
	    long long min_value = A[N-1];
	    for(int o=0;o<N;o++){
	        min_value=min(min_value,A[o]);
	        
	    }
	    long long answer1=max_value - min_value;
	    sort(A.begin(),A.end());
	    max_value = A[N-1];
	    for(int o=0;o<N;o++){
	        answer1=min(answer1,max_value - A[o]);
	        max_value = max(max_value,A[o]+K);
	    }
	    cout<<answer1<<endl;
	}
	return 0;
}
