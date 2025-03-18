/*D. Модуль бойынша сақинадағы кері элемент
time limit per test1 second
memory limit per test256 megabytes
Кейбір натурал m
 модулі берілсін және осы модуль құрған сақинаны қарастырайық (яғни 0
-ден m−1
-ге дейінгі сандардан тұрады). Содан кейін осы сақинаның кейбір элементтері үшін кері элементті табуға болады. m
 модулі бойынша a
 санына кері b
 саны деп аталады, бұл a⋅b≡1
 (modm)
 және ол көбінесе a−1
 деп белгіленеді. Сізге бір бүтін сан берілген - a
. Оның кері элементін 109+7
 модулімен табыңыз.

Input
Бір жолда бір бүтін сан берілед - a
 (1≤a≤109+6)
.

Output
Бір бүтін санды шығарыңыз - тапсырмаға жауап.

Examples
InputCopy
6
OutputCopy
166666668
InputCopy
68
OutputCopy
838235300

*/
#include <bits/stdc++.h>
using namespace std;
long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp >>= 1;
        base = (base * base) % mod;
    }
    return result;
}
int main() {
    long long a;
    cin >> a;
    
    const long long MOD = 1000000007;
    long long inverse = modPow(a, MOD - 2, MOD);
    cout << inverse << endl;
    return 0;
}