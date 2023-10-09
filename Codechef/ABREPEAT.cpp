#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    ll  t;cin>>t;
    while(t--){
        ll  n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll a=0,sum=0,b=0;
        for(ll j=0;j<n;j++){
            if(s[j]=='a'){
                a++;
                //cout<<s[j]<<'\t';
            }
            else if(s[j]=='b'){
                sum+=a;
                b++;
            }

        }
        sum*=k;
        ll y=k*(k-1);
        y/=2;
        sum+=(y*a*b);
        cout<<sum<<'\n';
    }
    return 0;
}
