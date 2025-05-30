#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void solve(){
    ll n;cin>>n;
    ll arr[100005]={0},x;
    for(ll i=0;i<n;i++){
        cin>>x;
        arr[x]=i;
    }
    ll ans=0;
    for(ll i=1;i<2*n;i++){
        for(ll j=1;j<=2*n;j++){
            if(i*j==arr[i]+arr[j])ans++;
        }
    }
    cout<<ans<<'\n';
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
