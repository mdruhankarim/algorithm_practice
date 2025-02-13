#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> count(k, 0);
    for (int a = 1; a <= n; ++a) {
        int remainder = a % k;
        count[remainder]++;
    }
    long long result = 0;
    for (int x = 0; x < k; ++x) {
        int y = (k - x) % k;
        if (x == y) {
            result += (long long)count[x] * (count[x] + 1) / 2;
        } else if (x < y) {
            result += (long long)count[x] * count[y];
        }
    }
    cout << result << endl;
    return 0;
}
