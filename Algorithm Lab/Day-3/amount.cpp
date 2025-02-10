/*A. Amount
time limit per test 1 second
memory limit per test 256 megabytes
Given a positive integer –n
All i
according to 1
-day i
Calculate the sum of the amounts up to , where(1≤i≤n)
.

Input
The only line of input contains a single integer –n
 (1≤n≤105)
.

Output
Output one integer - the answer to the task.

Example
InputCopy
3
OutputCopy
10
Note
The answer to this test is 1 + 3 + 6 = 10.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum= (long long)n*(n+1)*(n+2)/6;
    cout<<sum<<endl;
    return 0;
}