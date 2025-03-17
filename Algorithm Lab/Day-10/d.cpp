/*D. Айбар робот
time limit per test1 second
memory limit per test256 megabytes
Айбарға геометрия бойынша n
 есептерді шешу қажет. Оң қолымен ол бір есепті x
 минутта, ал сол қолымен y
 минутта шеше алады. Айбар бір уақытта екі қолымен де есептерді шеше алады. Мұғалім Айбардан барлық есептерді ең аз дегенде қанша минут ішінде шеше алатынын білуді сұрады. Айбар, әрине, тапсырманы еш қиындықсыз орындады. Сіз орындай аласыз ба?

Input
Бір жолда үш бүтін сан берілген – n
, x
 и y
 (1≤n,x,y≤109)
.

Output
Бір санды шығарыңыз – Айбар барлық есептерді ең аз дегенде шешетін минут саны.

Examples
InputCopy
9 3 4
OutputCopy
16
InputCopy
7 1 2
OutputCopy
5*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n, x, y;
    cin >> n >> x >> y;
    if (x > y) {
        swap(x, y);
    }
    long long left = 0, right = 1e18;
    while (left + 1 < right) {
        long long mid = (left + right) / 2;
        long long problems_solved_by_x = mid / x;
        long long problems_solved_by_y = mid / y;
        if (problems_solved_by_x + problems_solved_by_y >= n) {
            right = mid;
        } else {
            left = mid;
        }
    }
    cout << right << endl;
    return 0;
}