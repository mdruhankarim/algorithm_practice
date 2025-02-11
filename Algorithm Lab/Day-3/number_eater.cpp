/*D. Number of pairs
time limit per test1 second
memory limit per test256 megabytes
n and k Two positive integers are given.(1≤a≤b≤n) and (a+b) k Integers that are divisible by without remainder(a,b)
Find the number of pairs.

Input
The only line of input contains two integers –n and k (1≤n,k≤105)
.

Output
Find the number of pairs of integers that satisfy the conditions.

Examples
InputCopy
3 3
OutputCopy
2
InputCopy
6 2
OutputCopy
12
Note
In the first example, all pairs are: (1, 2), (3, 3).

In the second example, all pairs are: (1, 1), (1, 3), (1, 5), (2, 2), (2, 4), (2, 6), (3, 3), (3, 5), (4, 4), (4, 6), (5, 5), (6, 6).*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if((i+j)%k==0){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}