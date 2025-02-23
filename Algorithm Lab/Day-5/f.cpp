#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<tuple<int,int,int>>points(n);
    for(int i=0;i<n;++i){
        int x,y,z;
        cin>>x>>y>>z;
        points[i]={x,y,z};
    }
    sort(points.begin(),points.end());
    for(const auto&p:points){
        cout<<get<0>(p)<<" "<<get<1>(p)<<" "<<get<2>(p)<<"\n";
    }
    return 0;
}