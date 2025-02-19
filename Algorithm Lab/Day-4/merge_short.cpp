/*
B. Merge sort
time limit per test1 second
memory limit per test256 megabytes
n
 бүтін сандардан тұратын a
 массиві берілген. Сіздің міндетіңіз - біріктіру арқылы сұрыптау көмегімен берілген массивті сұрыптау.

Input
Кіріс деректерінің бірінші жолында бір бүтін сан бар – n
 (1≤n≤105)
 - массивтегі элементтер саны.

Келесі жолда n
 бүтін сан бос орын арқылы жазылады - массив элементтері.

Output
Бос орын арқылы бір жолда сұрыпталған массивті шығарыңыз.

Example
InputCopy
5
5 3 4 2 1
OutputCopy
1 2 3 4 5 

*/
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1=mid-left+1;
    int n2=right-mid;
    vector<int> L(n1),R(n2);
    for(int i=0;i<n1;i++)
        L[i]=arr[left+i];
    for(int j=0; j<n2;j++)
        R[j]=arr[mid+1+j];
    int i=0,j=0,k=left;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        } 
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1) {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int>& arr, int left, int right) {
    if(left<right) {
        int mid=left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for (int i=0;i<n;++i) {
        cout<<arr[i]<<" ";
    }
    return 0;
}