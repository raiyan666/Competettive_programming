#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    //fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    string s;
    int cnt=0;
    cin>>s;
    //cout<<(int)s.size()<<'\n';
    for(int i=0;i<(int)s.size()/2;i++){
        if(s[i]!=s[(int)s.size()-i-1])cnt++;
    }
    //cout<<cnt<<'\n';
    if(s.size()%2){
        if(cnt>1)cout<<"NO\n";
        else cout<<"YES\n";
    }
    else{
        if(cnt!=1)cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}
