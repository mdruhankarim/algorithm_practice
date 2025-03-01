#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxVal=arr[0],maxIndex=0;
    for(int i=1;i<n;i++){
        if(arr[i]>maxVal){
            maxVal=arr[i];
            maxIndex=i;
        }
    }
    cout<<maxVal<<endl;
    cout<<maxIndex+1<<endl;
    return 0;
}