#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll long long

#define vi vector<long long>
#define pb push_back
#define mp make_pair

#define ff first
#define ss second

#define fast_in_out                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;
void fun(long long a, long long b, long long c)
{
    long long ans = 1, x = a * b;
    long long two = 0;
    while (x % 2 == 0)
    {
        x /= 2;
        ans*=2;
    }
    //ans=two*2;
    //cout<<ans<<'\t';
    if(ans>=c)cout<<"YES\n";
    else cout<<"NO\n";
    return;
}
int main()
{
    //fast_in_out
    //freopen ("myfile.txt","w",stdout);
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        fun(a, b, c);
    }
    return 0;
}
