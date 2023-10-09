#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    string s,t;
    cin>>s>>t;
    int minim=100005;
    for(int i=0;i+(int)(t.size())<=(int)(s.size());i++){
            int cur=0;
        for(int j=0;j<(int)(t.size());j++){
            if(t[j]!=s[i+j])cur++;
        }
        minim=min(minim,cur);
    }
    cout<<minim<<'\n';
    return 0;
}
