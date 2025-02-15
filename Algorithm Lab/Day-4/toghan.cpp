#include<bits/stdc++.h>
using namespace std;
    int main() {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int count = 0;
        int total = 0;
        for (int price : a) {
            if (total + price <= s) {
                total += price;
                count++;
            } else {
                break;
            }
        }
        cout << count << endl;
        return 0;
}