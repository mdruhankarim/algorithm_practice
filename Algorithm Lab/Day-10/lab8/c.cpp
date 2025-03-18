/*C. Модуль бойынша азайту
time limit per test1 second
memory limit per test256 megabytes
Бастапқыда a
 және b
 (b≤a)
 екі бүтін оң сандар болды. Біз m=109+7
 айнымалысын белгілейміз. Сізге c
 және d
 екі бүтін сан беріледі, мұндағы с=amodm,
 d=bmodm
. m
 модулі бойынша a−b
 шығарыңыз.

Input
Бір жолда екі бүтін сан беріледі - c
 және d
 (0≤c,d≤109+6)
.

Output
Бір бүтін санды шығарыңыз - тапсырмаға жауап.

Examples
InputCopy
5 2
OutputCopy
3
InputCopy
2 5
OutputCopy
1000000004*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long c, d;
    cin >> c >> d;
    const long long MOD = 1000000007;
    long long result;
    if (c >= d) {
        result = c - d;
    } else {
        result = c - d + MOD;
    }
    cout << result << endl;
    return 0;
}