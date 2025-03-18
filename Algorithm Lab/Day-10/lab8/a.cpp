/*A. Жақсы жұптар
time limit per test1 second
memory limit per test256 megabytes
l
 және r
 екі бүтін сандары берілген. n
 айнымалысын белгілейміз және n
 әрқашан жұп болады, n=r−l+1
. [l;r]
 сегментіндегі барлық бүтін сандарды n/2
 жақсы жұптарға бөлу керек. Әр сан дәл бір жұпта болуы керек. Сандар жұбы жақсы деп аталады, егер олар өзара жай сандар болса, яғни олардың ЕҮОБ-і 1
-ге тең.

Input
Кірістердің бір жолында екі бүтін сан беріледі - l
 и r
 (1≤l<r≤1018
, r−l+1≤2⋅105
, (r−l+1)
 әрқашан жұп).

Output
Егер сәйкес бөлім болса, бірінші жолда «YES» шығарыңыз. Содан кейін r−l+12
 жұптарын, әр жұпты бөлек жолға шығарыңыз.

Егер бірнеше тиісті жауаптар болса, олардың кез-келгенін шығарыңыз.

Егер тиісті бөлім болмаса, «NO» шығарыңыз.

Example
InputCopy
5 10
OutputCopy
YES
6 7
5 8
9 10*/

#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main() {
    long long l, r;
    cin >> l >> r;
    
    long long n = r - l + 1;
    if (n % 2 == 1) {
        cout << "NO" << endl;
        return 0;
    }
    vector<long long> numbers;
    for (long long i = l; i <= r; i++) {
        numbers.push_back(i);
    }
    vector<pair<long long, long long>> pairs;
    vector<bool> used(n, false);
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        
        bool found = false;
        for (int j = i + 1; j < n; j++) {
            if (!used[j] && gcd(numbers[i], numbers[j]) == 1) {
                pairs.push_back({numbers[i], numbers[j]});
                used[i] = used[j] = true;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    for (auto p : pairs) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}