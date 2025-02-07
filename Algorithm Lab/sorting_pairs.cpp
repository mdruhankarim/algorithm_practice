/*n
consisting of whole numbersa
Given an array. Each element is a pair of numbers. We need to sort the array in ascending order. Ifx1<x2
or(x1==x2and​​​and1<y2)
if so, a couple( x 1 , y1)
 - (x2,y2)
will be less than.

Input
The first line of input data contains a single integer –n
 (1≤n≤103)
- the number of elements in the array.

Nextn
2 integers are written in the string separated by spaces - elements of the array pairs.

Output
Output the sorted array.

Example
InputCopy
4
1 3
2 2
2 1
1 2
OutputCopy
1 2
1 3
2 1
2 2*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    return 0;
}