#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int filler=b+c;
        int bread=a;
        int layer=0;
        if(bread-filler>0){
            filler=min(bread,filler);
            layer=2*filler+1;
        }
        else {
            filler=min(bread,filler);
            layer=2*filler-1;
        }
        cout<<layer<<'\n';
    }
    return 0;
}