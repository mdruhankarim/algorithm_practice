/*B. Айбар және картоп
time limit per test1 second
memory limit per test256 megabytes
Айбар осы жылдың басынан бастап n
 рет картоп отырғызады. i
-ші рет ол жыл басынан бастап ai
-ші күннің басында картоп отырғызады. ai
-ші күні ол картоптың жаңа дақылын отырғызғаннан кейін, Айбар келесі k
 күнде, соның ішінде ai
 күнді қоса алғанда, күн сайын бір килограмм картоп алады, өйткені ол осы дақылға тек k
 күн ғана қарайды. Айбар жаңа дақыл отырғызған кезде, ол қалған дақылдарға күтім жасаудан бас тартатынын ескеріңіз. Мұғалім Айбардан оған G
 килограмм картоп беруін сұрады, сондықтан Айбарға кем дегенде G
 килограмм картоп жинай алатынын білу үшін ең аз k
 санын білу қажет болды. Айбар, әрине, тапсырманы еш қиындықсыз орындады. Сіз орындай аласыз ба?

Input
Бірінші жолда бір бүтін сан жазылады t
 (1≤t≤1000)
 — кіріс жиындарының саны.

Жиынның бірінші жолында екі бүтін сан берілген – n
, және G
 (1≤n≤100,0≤G≤1018)
.

Жиынның екінші жолында n
 бүтін сандар берілген – a1,a2,…,an
 (1≤ai≤109;ai<ai+1)
 – күн нөмірі.

Output
Әрбір кіріс жиынтығы үшін бір бүтін санды шығарыңыз — k
 параметрінің минималды мәні.

Example
InputCopy
3
3 4
1 2 5
4 7
1 3 4 5
4 3
1 3 6 8
OutputCopy
2
3
1
Note
Бірінші сынақ мысалында, егер k
 = 2 болса, онда Айбар күндерде қарайды - [1,2,3,5,6];

Екінші сынақ мысалында, егер k
 = 3 болса, онда Айбар күндерде қарайды - [1,2,3,4,5,6,7];

Үшінші мысалда, егер k
 = 1 болса, онда Айбар күндерде қарайды - [1,3,6,8].*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long g;
        cin >> n >> g;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Binary search to find minimum k
        long long left = 1, right = 1e18;  // Maximum possible required k could be very large
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long total_potatoes = 0;
            
            for (int i = 0; i < n; i++) {
                // Start day for this crop
                int start_day = a[i];
                
                // End day is either k days after planting or the day before next planting
                int end_day;
                if (i == n-1) {
                    // Last planting, can care for full k days
                    end_day = start_day + mid - 1;
                } else {
                    // Care until next planting day or for k days, whichever comes first
                    end_day = min(start_day + mid - 1, a[i+1] - 1);
                }
                
                // Add the potato harvest for this crop
                total_potatoes += max(0LL, (long long)(end_day - start_day + 1));
            }
            
            if (total_potatoes >= g) {
                // This k is sufficient, try smaller
                right = mid - 1;
            } else {
                // This k is not enough, try larger
                left = mid + 1;
            }
        }
        
        cout << left << endl;  // left is the minimum value of k that works
    }
    return 0;
}
