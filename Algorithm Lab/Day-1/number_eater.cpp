/*C. Number eater
time limit per test2 seconds
memory limit per test256 megabytes

A number eater, as you probably understand, is a creature that eats numbers.

Today he/she a
found the array, itn
consists of numbers, and immediately began to choose which number to eat.

The numerologist is a sophisticated creature, so he isq
asks the question: "If[al
, al+1
, ..., ar−1
,ar]
If we take the inner array, how many numbers are there in it?d
"includes the digit?"

The number cruncher is not smart, so he asked you to answer these questions. That's why he doesn't count leading zeros.

Input
First line of input datan
andq
 (1≤n,q≤106)
consists of two integers.

Second waya
which is an arrayn
consists of numbers(0≤ai≤106)
.

Lastq
on each side of the roadli
,ri
anddi
there are three numbers(1≤li≤ri≤n,0≤di≤9)
.

Output
q
output a string, each string should contain one number — answers to the queries.

Example
InputCopy
5 3
1 12 4 151 42
1 4 1
2 3 0
3 3 4
OutputCopy
3
0
1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    while(q--){
        int l,r,d;
        cin>>l>>r>>d;
        int count=0;
        for(int i=l-1;i<r;i++){
            if(a[i]==d){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1e6 + 10;
const int MAX_DIGIT = 10;
int prefix[MAX_N][MAX_DIGIT];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        int num = a[i];
        bool hasDigit[MAX_DIGIT] = {false};
        while (num > 0) {
            int digit = num % 10;
            hasDigit[digit] = true;
            num /= 10;
        }
        for (int d = 0; d < MAX_DIGIT; ++d) {
            prefix[i + 1][d] = prefix[i][d] + (hasDigit[d] ? 1 : 0);
        }
    }
    for (int i = 0; i < q; ++i) {
        int l, r, d;
        cin >> l >> r >> d;
        cout << prefix[r][d] - prefix[l - 1][d] << '\n';
    }
    return 0;
}
