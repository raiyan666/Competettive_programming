#include<bits/stdc++.h>
#define ll long long 
#define nl cout<<nl;
#define forn(n) for(ll i=0;i<n;i++)

using namespace std;
ll mod=1000000007;
int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll k,n;
    cin>>n>>k;
    vector<ll>arr(n);
    vector<ll>permutation(n+1),ans(n+1),cnt(n);
    vector<ll>factorial(n+1),combination(n+1);
    ans[0]=1;ans[1]=n;
    forn(n+1){
        factorial[i]=1;
        permutation[i]=1;
        combination[i]=1;
    }
    for(ll i=1;i<=k;i++){
        ll x=n;
        for(ll j=1;j<=i;j++){
           permutation[i]*=x;
           permutation[i]%=mod;
            --x;
        }    
    }
    for(ll i=1;i<=n;i++){
        factorial[i]=factorial[i-1]*i;
        factorial[i]%=mod;
    }
    for(ll i=3;i<=k;i++){
        ans[i]=(permutation[i]%mod)/(factorial[i]%mod);
    }
    for(ll i=1;i<=k;i++)cout<<permutation[i]<<'\t';
    for(ll j=1;j<=n;j++)cout<<factorial[j]<<'\t';
    // for(ll i=1;i<=k;i++)
    // forn(k){
    //     ll r=k;
    //     for(ll j=0;j<i;j++){
    //         permutation[i]*=r;
    //         r--;
    //     }
    //     //permutation[i]*=;
    // }
    //forn(n)cout<<permutation[i]<<"\t";
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    
    for(ll auto it=mp.begin();it!=mp.end();it++){
        cnt.puch_back(it->second());
    }
    sort(cnt.begin(),cnt.end());
    ll s=cnt.size();
    for(ll i=3;i<=k;i++){
        
    }
    // int comb=1;
    // for(ll i=2;i<=n;i++){
    //     for(ll j=1;j<=i;j++){
            
    //     }
    // }
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     comb*=it->second;
    //     comb%=mod;
    // }

    return 0;
}