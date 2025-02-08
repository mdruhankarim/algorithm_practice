/*n
consisting of whole numbers a
Given an array. The array needs to be sorted in ascending order using the " max selection " method.

Input
The first line of input data contains a single integer –n
 (1≤n≤103)
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
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        int max_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[max_index]){
                max_index=j;
            }
        }
        swap(arr[i],arr[max_index]);
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}