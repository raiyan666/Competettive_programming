#include <bits/stdc++.h>
#define ll              long long
#define SL(n)           scanf("%lld",&n)
#define LF              double
#define SF(n)           scanf("%llf",&n)

#define vi              vector<int>
#define pb              push_back
#define mp              make_pair

#define ff              first
#define ss              second

#define FOR(i,s,e)      for( LL i=s;i<=e;i++)
#define RFOR(i,e,s)     for( LL i=e;i>=s;i--)

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl              printf("\n")
using namespace std;
int gcd(int a,int b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}
int arr[1002];
int main()
{
    int n,i;
    void prime();
    vi co_prime;
    scanf("%d",&n);
    for(i=0;i<n;++i)scanf("%d",&arr[i]);
    for(i=0;i<n-1;++i){
        co_prime.pb(arr[i]);
    if(gcd(arr[i],arr[i+1])!=1){
        co_prime.pb(1);
    }
    }
    co_prime.pb(arr[i]);
    printf("%d\n",co_prime.size()-n);
    vi::iterator it;
    for(it=co_prime.begin();it!=co_prime.end();it++)
        printf("%d ",*it);
    nl;
    return 0;
}
