/*Given a positive integer –n
Alli
according to1
-dayi
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
In this test, the answer will be 1 + 3 + 6 = 10.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long total=0;
    long long current=0;
    for(int i=1;i<=n;i++){
        current=current+i;
        total=total+current;
    }
    cout<<total<<endl;
    return 0;
}