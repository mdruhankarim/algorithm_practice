/*Given a positive integer –n
. n
Find the number of divisors of the number.

Input
One integer is given per line -n
 (1≤n≤109)
.

Output
Extract one integer - the answer to the task.

Examples
InputCopy
6
OutputCopy
4
InputCopy
1
OutputCopy
1*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i == n) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    cout<<count;
    return 0;
}