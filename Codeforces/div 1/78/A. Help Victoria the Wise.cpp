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
    set<char>con;
    string s;
    cin>>s;
    for(int i=0;i<(int)s.size();++i)
    {
        con.insert(s[i]);
    }
    int l=(int)(con.size());
    if(l!=1)printf("%d\n",l*(l-1));
    else printf("1\n");
    return 0;
}
