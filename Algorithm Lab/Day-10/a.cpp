/*A. Айбар және математика
time limit per test1 second
memory limit per test256 megabytes
Айбарда бүтін оң n
 саны бар. Мұғалім оған k
 санын берді және Айбарға n
-ге бөлінбейтін k
-ші бүтін оң санды табуды айтты. Айбар, әрине, тапсырманы еш қиындықсыз орындады. Сіз орындай аласыз ба?

Input
Кіріс деректерінің бірінші жолында екі бүтін сан берілген – n
 және k
 (2≤n≤109,1≤k≤109)
.

Output
n
-ге бөлінбейтін k
-сыншы бүтін оң санды шығарыңыз.

Examples
InputCopy
4 7
OutputCopy
9
InputCopy
4 12
OutputCopy
15
Note
Мысалы, егер n
 = 4 және k
 = 7 болса, онда 4-ке бөлінбейтін барлық сандар келесідей болады: 1,2,3,5,6,7,9,10,11,13.... Олардың ішіндегі 7-ші сан - 9.


*/
#include <iostream>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    long long result = k + (k - 1) / (n - 1);
    cout << result << endl;
    return 0;
}
