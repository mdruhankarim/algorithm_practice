#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<double> hypotenuses(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        hypotenuses[i] = sqrt((double)a * a + (double)b * b);
    }
    sort(hypotenuses.begin(), hypotenuses.end());
    cout << fixed << setprecision(6);
    for (double hypotenuse : hypotenuses) {
        cout << hypotenuse << " ";
    }
    cout << endl;
    return 0;
}