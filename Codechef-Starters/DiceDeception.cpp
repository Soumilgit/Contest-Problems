/*
Dice Deception
Alice and Bob are playing a board game.
On their turn, a player must roll 
�
N standard 
6
6-sided dice, and their action will be determined by the sum of values on the top faces of the 
�
N dice.

On a certain turn of Alice, she rolls the dice and obtains the sequence of values 
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
  on the top faces.
However, Bob isn't paying attention, allowing Alice to cheat a little!

Alice can choose a die, and flip it - so the opposite face is upward.
Note that these are standard 
6
6-sided dice, so the sum of values on opposite faces is 
7
7. That is:

1
1 is opposite to 
6
6.
2
2 is opposite to 
5
5.
3
3 is opposite to 
4
4.
So as to not make Bob suspicious, Alice can perform this flipping operation at most 
�
K times.
What's the maximum score (i.e, sum of values of top faces of the dice) she can obtain?

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains two space-separated integers 
�
N and 
�
K — the number of dice and the number of times Alice can flip dice.
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
  — the initial values of the dice.
Output Format
For each test case, output on a new line the maximum score Alice can obtain if she flips a die at most 
�
K times.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int>a(n);
        for(int m=0;m<n;m++){
            cin>>a[m];
        }
        int sum=0;
        sort(a.begin(),a.end());
        for(int m=0;m<n;m++){
            if(k){
                int b=7-a[m];
                if(b>a[m]){
                    a[m]=b;
                }
                k--;
            }
            sum+=a[m];
        }
        cout<<sum<<endl;
    }
    return 0;
}
