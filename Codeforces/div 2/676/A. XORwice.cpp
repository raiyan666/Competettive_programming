#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll long long
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t,a,b;cin>>t;
    while(t--){
        cin>>a>>b;
        if(a!=b){
        ll minim=(a^0)+(b^0);
        for(ll i=1;i<=min(a,b);i++){
            minim=min(minim,((a^i)+(b^i)));
        }
        cout<<minim<<'\n';
        }
        else cout<<"0\n";
    }
    return 0;
}
