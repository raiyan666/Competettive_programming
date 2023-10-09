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
int main()
{
    fast_in_out
    int n;
    scanf("%d",&n);
    string arr;
    cin>>arr;
    map<string,int>container;
    for(int i=0;i<n;i++)
    {
        string exm=arr.substr(i,i+1);
        if(container.find(exm)==container.end())container[exm]=1;
        else container[exm]++;
    }

    return 0;
}
