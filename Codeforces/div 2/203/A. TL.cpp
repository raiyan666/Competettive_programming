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
int a[103],b[103];
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    int m,n;
    cin>>n>>m ;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a,a+n);
    //sort(b,b+m);
    int maximum=0;
    if(a[0]*2<=a[n-1])maximum=a[n-1];
    else maximum=a[0]*2;
    //cout<<maximum<<'\n';
    for(int i=0;i<m;i++)if(maximum>=b[i]){
        cout<< "-1\n";
        return 0;
    }
    cout<<maximum<<'\n';
    return 0;
}
