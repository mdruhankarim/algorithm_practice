/*A. Sankoy number
time limit per test1 second
memory limit per test256 megabytes
n
andn
consisting of whole numbers a Given an array of numbers. Determine whether the array contains at least one odd number. If the number of this number is 3 − ten​​ If it is not less, it is called a fashionable number.

Input
In the first line of input datan
 (1≤n≤1000)
A natural number is given.

In the second line of input datan
integera1,a2,...,an
 (−109≤ai≤109,ai≠0)
given.

Output
If the array contains at least one positive number, output the word " YES ", otherwise output the word " NO ".

Examples
InputCopy
5
1 2 3 3 5
OutputCopy
NO
InputCopy
5
4 3 1 3 3
OutputCopy
YES*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}