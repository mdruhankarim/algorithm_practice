/*Programming coach returns to Denmarka
The trainer gave him an array and this time to test his abilities, he gave him the pieces. He needs to find the sums in the pieces. Daniyar needs to answer them.

Input
The first line of input data contains a single integer –n
 (1≤n≤5⋅105)
- the number of elements in the array.

On the second line of incomen
there are integersai
 (−109≤ai≤109)
 — a
elements of the array.

The third line of inputs contains an integer –q
 (1≤q≤5⋅105)
— number of questions.

Nextq
Each of the lines contains two integers –li
Andri
 (1≤li≤ri≤n)
— the boundaries of the array segment where you need to find the sum.

Output
For each question in a separate row, extract the sum of the elements in the corresponding slice of the array (including the boundaries).

Example
InputCopy
5
3 2 -1 -3 5
4
1 3
2 4
1 5
4 4
OutputCopy
4
-2
6
-3

*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix[i + 1] = prefix[i] + a[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }
    return 0;
}