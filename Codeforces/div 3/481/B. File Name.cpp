#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    int t,cur=0,ans=0;cin>>t;
    string s;
    cin.ignore();
    cin>>s;
    for(int i=0;i<t;i++){
        if(s[i]=='x'){
            cur++;
            if(cur>=3){
                ans++;
                cur--;
            }
        }
        else cur=0;
    }
    cout<<ans<<'\n';
    return 0;
}
