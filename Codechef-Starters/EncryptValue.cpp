/*
You are given an array 
�
A containing 
�
N integers.

Consider the following process:

Let 
�
=
0
S=0 initially.
For each 
�
i from 
1
1 to 
�
N in order, update 
�
S to either 
(
�
+
�
�
)
(S+A 
i
​
 ) or 
(
�
×
�
�
)
(S×A 
i
​
 ).
That is, either add 
�
�
A 
i
​
  to 
�
S or multiply 
�
S by 
�
�
A 
i
​
 .
Before performing the process, you're allowed to freely rearrange the elements of 
�
A as you like.
If you choose the rearrangement of 
�
A and the sequence of operations optimally, what's the maximum possible value of 
�
S that you can obtain?

This maximum value can be very large, so print it modulo 
1
0
9
+
7
10 
9
 +7.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer 
�
N — the number of elements in the array.
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
  - the elements of the array.
Output Format
For each test case, output on a new line the maximum possible value of 
�
S, modulo 
1
0
9
+
7
10 
9
 +7.

Constraints
1
≤
�
≤
1
0
3
1≤T≤10 
3
 
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
#include <vector>
#include <algorithm>

using namespace std;

const int modo=1e9 + 7;

int main(){
    int tcs;
    cin>>tcs;
    while(tcs--){
        int arr_len;
        cin>>arr_len;
        vector<int>array(arr_len);
        
        for(int o=0;o<arr_len;++o){
            cin>>array[o];
        }
        sort(array.begin(),array.end());
        
        long long rez=array[0];
        for(int o=1;o<arr_len;++o){
            rez=max(rez*1LL*array[o],rez+array[o]);
            rez%=modo;
        }
        cout<<rez<<endl;
    }
    return 0;
}
