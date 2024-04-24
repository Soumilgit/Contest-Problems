'''
Gotta Catch Em All
You're playing your favorite video game: Pekómon!
The objective of the game is, of course, to "Catch Them All".

There are N different Pekómon in the game. The i-th of them has a catching difficulty of A i.
To catch these Pekómon, you must use Pekóballs. There are two types of Pekóballs available to you:

Normal Pekóballs, which cost X coins each.
You need to throw exactly A i Normal Pekóballs to catch a Pekómon whose catching difficulty is A i.
Master Pekóballs, which cost Y coins each.
You need to throw only 1 Master Pekóball to catch any Pekómon, no matter what its catching difficulty is.
Find the minimum number of coins you need to spend on buying Pekóballs, so that you can catch all N Pekómon.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains three space-separated integers N,X, and Y — the number of Pekómon, the cost of a Normal Pekóball, and the cost of a Master Pekóball.
The second line contains N space-separated integers 1
,2

…
,A 
1
​
 ,A 
2
​
 ,…,A 
N
​
  — the catching difficulties of the Pekómon.
Output Format
For each test case, output on a new line the minimum number of coins you need to spend on buying Pekóballs, in order to catch all 
N Pekómon.

Constraints
1≤T≤100
1≤N≤100
1≤X≤Y≤100
1≤A i≤100
'''# cook your dish here
for j in range(int(input())):
    N,X,Y=map(int,input().split())
    A=list(map(int,input().split()))
    T=0
    for j in A:
        T+=min((X*j),Y)
    print(T)
    
