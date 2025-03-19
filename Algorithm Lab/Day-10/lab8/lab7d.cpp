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
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(), c.end()
#define print(c)          \
    for (auto e : c)      \
        cout << e << " "; \
    cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c, d;
    cin >> n >> c >> d;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    priority_queue<ll> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(abs(a[i] - b[i]));
    }

    int totalOps = c + d;
    while (totalOps--)
    {
        ll diff = pq.top();
        pq.pop();
        if (diff > 0)
            diff--;
        else
            diff++;
        pq.push(diff);
    }

    ll ans = 0;
    while (!pq.empty())
    {
        ll diff = pq.top();
        pq.pop();
        ans += diff * diff;
    }

    cout << ans << "\n";
    return 0;
}