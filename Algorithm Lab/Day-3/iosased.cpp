#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<vector<int>> prefix(n + 1, vector<int>(10, 0));
    for (int i = 1; i <= n; ++i) {
        int num = a[i - 1];
        for (int j = 0; j < 10; ++j) {
            prefix[i][j] = prefix[i - 1][j] + (num == j);
        }