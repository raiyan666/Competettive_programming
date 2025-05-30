#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin.ignore();
        cin>>s;
        if(s[n-1]=='0')cout<<"even\n";
        else cout<<"odd\n";
    }
    return 0;
}
