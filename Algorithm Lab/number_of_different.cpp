/*n
andn
consisting of whole numbersa
Given an array. Find the number of distinct numbers in the array.

Input
In the first line of input datan
 (1≤n≤1000)
A natural number is given.

In the second line of input datan
integera1,a2,...,an
 (−109≤ai≤109,ai≠0)
given.

Output
Count the number of distinct numbers in the array.

Examples
InputCopy
5
1 2 3 4 5
OutputCopy
5
InputCopy
4
1 2 2 3
OutputCopy
3*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size();
    return 0;
}