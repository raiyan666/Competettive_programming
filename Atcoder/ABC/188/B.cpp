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
    int t;cin>>t;
    int a[100000],b[100000];
    for(int i=0;i<t;i++)cin>>a[i];
    for(int i=0;i<t;i++)cin>>b[i];
    int x=0;
    for(int i=0;i<t;i++){
        x+=a[i]*b[i];
    }
    if(x==0)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
