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
    //fast_in_out
    string s;
    cin>>s;
    for(int i=0;i<(int)(s.size());i++)
    {
        if(s[i]<'7')s[i]='4'
            else s[i]='7';
    }
    cout<<s<<'\n';
    return 0;
}
