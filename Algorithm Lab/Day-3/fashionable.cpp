
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<int, int> frequency;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        frequency[num]++;
    }
    bool fans = false;
    for (const auto &entry : frequency) {
        if (entry.second >= 3) {
            fans = true;
            break;
        }
    }
    if (fans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}