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
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}