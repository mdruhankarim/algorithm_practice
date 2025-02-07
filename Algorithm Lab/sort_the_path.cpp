/*Consisting of lowercase Latin letterss
Given a string. Sort the string alphabetically by letters in ascending order.

Input
One line of input contains a string of lowercase Latin letters –s
 (1≤|s|≤1000)
.

Output
Output the string alphabetically by sorting it by letters in ascending order.

Example
InputCopy
abdca
OutputCopy
aabcd*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s;
    return 0;
}