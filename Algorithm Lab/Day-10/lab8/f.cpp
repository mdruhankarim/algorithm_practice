/*F. Жақсы жай сандар
time limit per test1 second
memory limit per test256 megabytes
n
 және k
 екі бүтін сандар берілген. Жақсы жай сан - бұл үш санның қосындысы ретінде ұсынылатын жай сан: екі көршілес жай және 1
. Мысалы, 31=13+17+1
, немесе 13=5+7+1
. 2
-ден n
-ге дейінгі бүтін сандар арасында кем дегенде k
 жақсы жай сан бар екенін анықтаңыз.

Input
Бір жолда екі бүтін сан беріледі - n
 және k
 (2≤n≤1000,0≤k≤n)
.

Output
Егер 2
-ден n
-ге дейінгі бүтін сандар арасында кем дегенде k
 жақсы жай сандар болса, «YES» шығарыңыз. Әйтпесе, «NO» шығарыңыз.

Examples
InputCopy
20 2
OutputCopy
YES
InputCopy
20 3
OutputCopy
NO*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    int count_good_primes = 0;
    for (int prime : primes) {
        bool is_good = false;
        for (int j = 0; j < primes.size() - 1; ++j) {
            int prime1 = primes[j];
            int prime2 = primes[j + 1];
            if (prime1 + prime2 + 1 == prime) {
                is_good = true;
                break;
            }
            if (prime1 + prime2 + 1 > prime) {
                break;
            }
        }
        if (is_good) {
            count_good_primes++;
        }
    }
    if (count_good_primes >= k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}