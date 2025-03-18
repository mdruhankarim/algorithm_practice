/*D. Айырмашылықты азайту
time limit per test1 second
memory limit per test256 megabytes
Бүтін сандардан тұратын екі массив берілген a
 және b
, олардың ұзындығы n
. Сіз a
 массивіне тек қана c
 операция және b
 массивіне тек қана d
 операция жасай аласыз. Бір операцияда сіз массивтің бір элементін таңдап, оның мәнін 1-ге көбейтуге немесе азайтуға болады. Массивтердің айырмашылығын келесідей анықтайық ∑ni=1(ai−bi)2
.

Барлық операцияларды орындағаннан кейін пайда болуы мүмкін массивтердің минималды айырмашылығын шығарыңыз.

Input
Кіріс деректерінің бірінші жолында үш бүтін сан берілген n
 (1≤n≤103)
, c
 және d
 (0≤c+d≤103,cиd
 теріс емес) — массивтің ұзындығы және a
 және b
 массивтерімен жасау керек операциялар саны.

Екінші жолда n
 бүтін сан берілген a1,a2,...,an
 (−106≤ai≤106
) — a
 массиві.

Үшінші жолда n
 бүтін сан берілген b1,b2,...,bn
 (−106≤bi≤106
) — b
 массиві.

Output
Шығу деректеріне бір ғана сан — c
 операциясы және d
 операциясынан кейінгі ∑ni=1(ai−bi)2
 минималды мәнін шығарыңыз.

Examples
InputCopy
2 0 0
1 2
2 3
OutputCopy
2
InputCopy
2 1 0
1 2
2 2
OutputCopy
0
InputCopy
2 5 7
3 4
14 4
OutputCopy
1*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<int> diff(n);
    for(int i = 0; i < n; i++) {
        diff[i] = a[i] - b[i];
    }
    vector<pair<int, int>> ops;
    for(int i = 0; i < n; i++) {
        ops.push_back({abs(diff[i]), i});
    }
    sort(ops.rbegin(), ops.rend());
    for(auto &op : ops) {
        int idx = op.second;
        if(diff[idx] > 0) {
            int change = min(c, diff[idx]);
            diff[idx] -= change;
            c -= change;
            change = min(d, diff[idx]);
            diff[idx] -= change;
            d -= change;
        } 
        else if(diff[idx] < 0) {
            int change = min(c, -diff[idx]);
            diff[idx] += change;
            c -= change;
            change = min(d, -diff[idx]);
            diff[idx] += change;
            d -= change;
        }
    }
    long long result = 0;
    for(int i = 0; i < n; i++) {
        result += (long long)diff[i] * diff[i];
    }
    cout << result << endl;
    return 0;
}