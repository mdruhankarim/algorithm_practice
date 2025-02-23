#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int count=0;
    for(int i=0;i<n;++i){
        if(x>a[i]){
            x+=a[i];
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}