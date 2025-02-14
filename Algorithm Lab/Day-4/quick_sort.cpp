/*A. Quick sort
time limit per test1 second
memory limit per test256 megabytes
n consisting of whole numbers a
You are given an array. Your task is to sort the given array using quick sort .

Input
The first line of input data contains a single integer –n
 (1≤n≤105)
- the number of elements in the array.

On the next linen
integers are written with spaces - array elements.

Output
Output a sorted array in one line by space.

Example
InputCopy
5
5 3 4 2 1
OutputCopy
1 2 3 4 5 

*/
#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr,int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}