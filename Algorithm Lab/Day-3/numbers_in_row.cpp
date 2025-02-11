/*B. Numbers in a row
time limit per test1 second
memory limit per test256 megabytes
n consisting of whole numbers a Given an array. Find the maximum number of consecutive identical numbers.

Input
The input data is an integer n (1≤n≤105) — the number of elements in the array.

Further, through the empty spacen
The number is written –a i (−109≤ai≤109)
— array elements.

Output
Find the maximum number of consecutive identical numbers.

Example
InputCopy
9
3 1 4 4 2 2 2 5 5
OutputCopy
3*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int count=1;
    int max_count=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count++;
            max_count=max(max_count,count);
        }
        else{
            count=1;
        }
    }
    cout<<max_count<<endl;
    return 0;
}