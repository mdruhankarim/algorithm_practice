/*B. Орташа сан
time limit per test1 second
memory limit per test256 megabytes
n
 және n
 әртүрлі бүтін сандардан тұратын a
 массиві берілген. Орташа санды басып шығарыңыз. Мысалы, a=[2,3,1,8,7]
 болса, орташа сан 3
 болады.
Input
Кіріс деректерінің бірінші жолында n
 (3≤n≤1000)
 натурал саны берілген.
Кіріс деректерінің екінші жолында n
 бүтін сан a1,a2,...,an
 (1≤ai≤109,ai≠0)
 берілген.
n
 тақ сан екеніне кепіл берілген.
Output
Есептің жауабын шығарыңыз.
Examples
InputCopy
5
5 7 2 10 6
OutputCopy
6
InputCopy
3
10 5 2
OutputCopy
5
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, w;
    cin >> n >> w;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), [](long long x, long long y) {
        return x > y;
    });
    long long totalSum = 0;
    for (int i = 0; i < min(w, n); ++i) {
        if (a[i] > 0) {
            totalSum += a[i];
        } else {
            break;
        }
    }
    cout << totalSum << endl;
    return 0;
}