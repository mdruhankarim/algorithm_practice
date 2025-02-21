/*F. Нүктелерді сұрыптау
time limit per test1 second
memory limit per test256 megabytes
n
 бүтін сандардан тұратын a
 массиві берілген, мұндағы массивтің әрбір элементі құрылым Point(intx,inty,intz)
 болып табылады. Массивті олардың x
-терін өсу бойынша, ал x
-тер тең болған жағдайда y
-терді өсу бойынша, ал y
-тер тең болған жағдайда олардың z−
терін өсу бойынша сұрыптаңыз.

Input
Кіріс деректерінің бірінші жолында бір бүтін сан бар – n
 (1≤n≤2⋅105)
 - массивтегі элементтер саны.

Келесі n
 жолдарда үш бүтін сан жазылады xi
, yi
, zi
 (−109≤xi,yi,zi≤109)
.

Output
n
 жолдарда сұрыпталған массивті шығарыңыз.

Example
Input
6
1 2 3
2 4 3
2 2 2
4 5 3
4 1 1
3 2 3
Output
1 2 3
2 2 2
2 4 3
3 2 3
4 1 1
4 5 3*/
#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x,y,z;
};
bool cmp(Point a,Point b){
    if(a.x==b.x){
        if(a.y==b.y){
            return a.z<b.z;
        }
        return a.y<b.y;
    }
    return a.x<b.x;
}
int main(){
    int n;
    cin>>n;
    Point a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].x>>a[i].y>>a[i].z;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].x<<" "<<a[i].y<<" "<<a[i].z<<endl;
    }
    return 0;
}