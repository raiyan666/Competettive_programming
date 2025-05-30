#include <bits/stdc++.h>
using namespace std;
vector<int>nodes[100005];
int main(){
    freopen("planting.in","r",stdin);
    freopen("planting.out","w",stdout);
    int n,n1,n2;
        cin>>n;
    for(int i=1;i<n;i++){
        cin>>n1>>n2;
        nodes[n1-1].push_back(n2-1);
        nodes[n2-1].push_back(n1-1);
        //cout<<"ok"<<endl;
    }
    int maxim=0;
    for(int i=0;i<n;i++){
        maxim=max(maxim,int(nodes[i].size()+1));
    }
    cout<<maxim<<endl;
    
    return 0;
}