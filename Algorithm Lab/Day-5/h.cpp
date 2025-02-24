#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long x;
    cin>>n>>x;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int kills=0;
    for(int i=0;i<n;i++){
        if(x>a[i]){
            x+=a[i];
            kills++;
        }else{
            break;
        }
    }
    cout<<kills<<endl;
    return 0;
}