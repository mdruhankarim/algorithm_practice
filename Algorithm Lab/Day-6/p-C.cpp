#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,r;cin>>n>>l>>r;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<(r-l+1)<<endl;
    for(int i=l-1;i<r;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}