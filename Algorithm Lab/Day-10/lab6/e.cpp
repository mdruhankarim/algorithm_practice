/*E. Айбар және контесттер
time limit per test1 second
memory limit per test256 megabytes
Олимпиадалық бағдарламалаудың бір контестінде n
 тақырып бойынша есептер бар және i
 тақырып бойынша дәл ai
 есеп болуы керек деп есептейік, мұнда (1≤i≤n)
. Айбарда i
-ші тақырып бойынша bi
 есеп бар, мұнда (1≤i≤n)
.

Айбар қосымша k
-дан аспайтын есептерді ойлап таба алады және әр есеп кез-келген тақырып бойынша болуы мүмкін. Мұғалім Айбардан қосымша ойластырылған есептерді ескере отырып жасай алатын контесттердің максималды санын білуді сұрады. Әрбір есеп бір ғана контестте бола алатынын ескеріңіз. Айбар, әрине, тапсырманы еш қиындықсыз орындады. Сіз орындай аласыз ба?

Input
Кіріс деректерінің бірінші жолында екі бүтін оң сан болады – n
 және k
 (1≤n≤105,1≤k≤109)
.

Екінші жолда n
 бүтін сандар берілген – a1,a2,…,an
 (1≤ai≤109)
.

Үшінші жолда n
 бүтін сандар берілген – b1,b2,…,bn
 (1≤bi≤109)
.

Output
Бір санды шығарыңыз — Айбар қосымша ойластырылған есептерді ескере отырып жасай алатын контесттердің максималды саны.

Examples
InputCopy
2 3
2 3
5 7
OutputCopy
3
InputCopy
3 3
2 3 4
4 5 7
OutputCopy
2
Note
Бірінші мысалда Айбар 1-ші тақырып бойынша 1 есепті және 2-ші тақырып бойынша 2 есепті ойластыра алады. Жалпы, Айбарда [6, 9] есеп болады және бұл 3 контестке жетеді.

Екінші мысалда Айбар 1-ші тақырып бойынша 1 есепті, 2-ші тақырып бойынша 1 есепті және 3-ші тақырып бойынша 1 есепті ойластыра алады. Жалпы, Айбарда [5, 6, 8] есептер болады және бұл 2 контестке жеткілікті.*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    // Binary search to find the maximum number of contests
    long long left = 0, right = 1e18; // Increase upper bound to handle extreme cases
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long additional_problems_needed = 0;
        bool overflow = false;
        
        // Calculate how many additional problems are needed to make 'mid' contests
        for (int i = 0; i < n; i++) {
            // Check for potential overflow
            if (a[i] > 0 && mid > (LLONG_MAX / a[i])) {
                overflow = true;
                break;
            }
            
            long long problems_required = mid * a[i];
            if (problems_required > b[i]) {
                additional_problems_needed += problems_required - b[i];
                // Check if we've already exceeded k
                if (additional_problems_needed > k) {
                    break;
                }
            }
        }
        
        // If overflow or too many problems needed, reduce the number of contests
        if (overflow || additional_problems_needed > k) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    cout << right << endl;
    return 0;
}