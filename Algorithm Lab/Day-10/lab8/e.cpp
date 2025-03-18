/*E. Минималды бөлгіштер
time limit per test1 second
memory limit per test256 megabytes
2
-ден n
-ге дейінгі әрбір бүтін сан үшін оның минималды бөлгішін шығарыңыз.

Input
Бір жолда бір бүтін сан беріледі - n
 (1≤n≤106)
.

Output
n−1
 жолдарды шығарыңыз. i
-ші жолда бір бүтін санды шығарыңыз - i+1
 санының минималды бөлгіші, мұндағы 1≤i≤n−1
.

Example
InputCopy
10
OutputCopy
2
3
2
5
2
7
2
3
2*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> smallest_divisor(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        if (smallest_divisor[i] == 0) {
            smallest_divisor[i] = i;
            for (long long j = (long long)i * i; j <= n; j += i) {
                if (smallest_divisor[j] == 0) {
                    smallest_divisor[j] = i;
                }
            }
        }
    }
    for (int i = 2; i <= n; ++i) {
        cout << smallest_divisor[i] << endl;
    }
    return 0;
}