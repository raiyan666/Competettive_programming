#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    int t,ans=0;cin>>t;
    for(int a=1;a<=t;a++){
        for(int b=1;a*b<t;b++){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
