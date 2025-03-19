/*G. Санды факторизациялау
time limit per test1 second
memory limit per test256 megabytes
Натурал санның факторизациясы оның жай көбейткіштердің көбейтіндісіне жіктелуі деп аталады. Мұндай жіктелудің болуы мен бірегейлігі (факторлардың ретіне дейін) арифметиканың негізгі теоремасынан туындайды.

n
-ді жай көбейткіштерге бөліп, оларды өсу ретімен шығарыңыз.

Input
Бір жолда бір бүтін сан беріледі - n
 (2≤n≤109)
.

Output
Бірінші жолда k
 санының жай көбейткіштерінің санын, ал екінші жолда бос орын арқылы бүтін сандардың k
 санын - n
 жай көбейткіштерінің өзін көрсетіңіз.

Examples
InputCopy
8
OutputCopy
3
2 2 2 
InputCopy
5
OutputCopy
1
5 
InputCopy
30
OutputCopy
3
2 3 5 
InputCopy
100
OutputCopy
4
2 2 5 5 

*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    cout << factors.size() << endl;
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
    return 0;
}