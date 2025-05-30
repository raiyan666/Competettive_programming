#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    if(a==1){
        if((n-1)%b==0){
        cout<<"Yes\n";
        return;
    }
    else{
        cout<<"No\n";
        return;
    }
}
    else{
        ll m=1;
        while(m<=n){
            if((n-m)%b==0){
                cout<<"Yes\n";
                return;
            }
            m*=a;
        }
        cout<<"No\n";
        return;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();

    }
}
