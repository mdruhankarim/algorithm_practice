/*n
consisting of whole numbersa
Given an array. It is necessary to sort the array in ascending order using the " insertion " method.

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
1 2 3 4 5 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}