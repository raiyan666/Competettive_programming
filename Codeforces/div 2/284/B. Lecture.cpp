#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long

#define vi              vector<int>
#define pb              push_back


#define ff              first
#define ss              second

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    //fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int m,n;
    cin>>n>>m;
    string a,b;
    map<string,string>S,R;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        S[a]=b;
    }
    for(int i=0;i<n;i++){
        cin>>a;
        if((int)S[a].size()<(int)a.size())cout<<S[a];
        else cout<<a;
        if(i!=n-1)cout<<" ";
        else cout<<'\n';
    }

    return 0;
}
