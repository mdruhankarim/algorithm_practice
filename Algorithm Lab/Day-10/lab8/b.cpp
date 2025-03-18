/*B. Алишер және бөлшектер
time limit per test1 second
memory limit per test256 megabytes
Мұғалім Алишерден екі рационалды a/b
 және c/d
 бөлшектерін қосуды және f/g
 қысқартылмайтын бөлшегі ретінде ұсынуды сұрады. Алишер небәрі 7
 жаста болғандықтан, ол мұны қалай жасау керектігін білмейді және сізден оған көмектесуіңізді сұрайды.

Input
Бірінші және жалғыз жолда төрт бүтін сан беріледі – a
, b
, c
 және d
 (1≤a,b,c,d≤100)
.

Output
Бос орын арқылы екі оң f
 және g
 сандарын шығарыңыз - тапсырмаға жауап.

Example
InputCopy
2 5 1 10
OutputCopy
1 2*/

#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int numerator = a * d + c * b;
    int denominator = b * d;
    int g = gcd(numerator, denominator);
    int f = numerator / g;
    int g_result = denominator / g;
    cout << f << " " << g_result << endl;
    return 0;
}