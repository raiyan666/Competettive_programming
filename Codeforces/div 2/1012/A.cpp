#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){

        int x,y,a;
        cin>>x>>y>>a;
        int rem=a%(x+y);
        double ans=double(rem)+0.5;
        double m=double(x);
        if(ans-m >0){
            cout<<"Yes\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}