/*F. Айбар және нүктелер
time limit per test1 second
memory limit per test256 megabytes
Айбар координаталық түзуде n
 көк және m
 қызыл нүктелер салған. Қызыл нүктелер d
-дан аспайтын қашықтықта барлық көк нүктелерді жаба алады. Мұғалім Айбардан барлық қызыл нүктелер көк нүктелерді жаба алатындай ең кіші d
-ны табуды сұрады. Айбар, әрине, тапсырманы еш қиындықсыз орындады. Сіз орындай аласыз ба?

Input
Кіріс деректерінің бірінші жолында екі бүтін оң сан болады – n
 және m
 (1≤n,m≤105)
.

Екінші жолда n
 бүтін сандар берілген – a1,a2,…,an
 (0≤ai≤109)
 – көк нүктелердің координаттары. Барлық координаттар өсу ретімен берілген.

Үшінші жолда m
 бүтін сандар берілген – b1,b2,…,bm
 (0≤bi≤109)
 – қызыл нүктелердің координаттары. Барлық координаттар өсу ретімен берілген.

Output
Бір санды шығарыңыз – барлық көк нүктелер қызыл түспен жабылатын ең кіші d
.

Examples
InputCopy
3 2
1 3 9
2 7
OutputCopy
2
InputCopy
5 3
0 3 8 12 15
2 3 12
OutputCopy
4*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> blue(n), red(m);
    
    // Read blue points
    for (int i = 0; i < n; i++) {
        cin >> blue[i];
    }
    
    // Read red points
    for (int i = 0; i < m; i++) {
        cin >> red[i];
    }
    
    long long max_min_distance = 0;
    
    // For each blue point, find the closest red point
    for (int i = 0; i < n; i++) {
        // Binary search to find the closest red point
        int left = 0, right = m - 1;
        long long min_distance = LLONG_MAX;
        
        // If blue point is before first red point or after last red point
        min_distance = min(min_distance, abs(blue[i] - red[0]));
        min_distance = min(min_distance, abs(blue[i] - red[m-1]));
        
        // Binary search for the closest red point
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (red[mid] <= blue[i]) {
                // Calculate distance to this red point
                min_distance = min(min_distance, blue[i] - red[mid]);
                left = mid + 1;
            } else {
                // Calculate distance to this red point
                min_distance = min(min_distance, red[mid] - blue[i]);
                right = mid - 1;
            }
        }
        
        // Update the maximum of minimum distances
        max_min_distance = max(max_min_distance, min_distance);
    }
    
    cout << max_min_distance << endl;
    
    return 0;
}