/*A. Бинарлық іздеу
time limit per test1 second
memory limit per test256 megabytes
Айбарда n
 бүтін сандардан тұратын a
 массиві бар, ол өсу реті бойынша сұрыпталған. Мұғалім оған q
 сұрақ қойды. Әр сұрақта ол Айбардан массивте x
 саны бар-жоғын сұрайды. Айбар, әрине, тапсырманы еш қиындықсыз орындады. Сіз орындай аласыз ба?

Input
Кіріс деректерінің бірінші жолында екі бүтін сан берілген – n
 және q
 (1≤n,q≤105)
.

Екінші жолда n
 бүтін сандар a1,a2,…,an
 (−2∗109≤ai≤2∗109)
 – массив элементтері берілген.

Үшінші жолда q
 бүтін сандар – x
 (−2∗109≤x≤2∗109)
 – сұрақтар қойылады.

Output
q
 жол шығару керек – массивте x
 саны бар ма?

Example
InputCopy
7 5
-1 0 2 3 5 7 8
-4 -1 2 4 5
OutputCopy
NO
YES
YES
NO
YES

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<q;i++){
        int x;cin>>x;
        if(binary_search(arr.begin(),arr.end(),x)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}