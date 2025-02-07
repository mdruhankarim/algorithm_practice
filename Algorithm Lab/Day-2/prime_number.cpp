/*Given a positive integer –n
. Determine whether the given number is prime. Recall that a prime number is a natural number that has only two natural divisors.

Input
One integer is given per line -n
 (1≤n≤109)
.

Output
Ifn
If it is simple, output " YES ", otherwise - " NO ".

Examples
InputCopy
2
OutputCopy
YES
InputCopy
6
OutputCopy
NO
InputCopy
1
OutputCopy
NO

*/ 
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    if(isPrime(n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}