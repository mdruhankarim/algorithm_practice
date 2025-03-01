#include<bits/stdc++.h>
using namespace std;
int findClosest(vector<int>&arr,int x){
    int left=0,right=arr.size()-1,closest=arr[0];
    while(left<=right){
        int mid=left+(right-left)/2;
        if(abs(arr[mid]-x)<abs(closest-x)){
            closest=arr[mid];
        }else if(abs(arr[mid]-x)==abs(closest-x)){
            closest=min(closest,arr[mid]);
        }
        if(arr[mid]<x){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return closest;
}
int main(){
    int n,q;cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    while(q--){
        int x;cin>>x;
        cout<<findClosest(a,x)<<endl;
    }
    return 0;
}