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
    int a,b,c;
    cin>>a>>b>>c;
    set<int>s;
    for(int i=a;i<=b;i++){
        if(c%i==0)s.insert(i);
    }
    cout<<s.size()<<endl;
    return 0;
}
