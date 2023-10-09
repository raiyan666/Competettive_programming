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
    int p=0;
    string s;
    cin>>s;
    stack<char>con;
    for(int i=0;i<(int)s.size();i++)
    {
        if(!con.empty()&&con.top()==s[i])
        {
            ++p;
            con.pop();
        }
        else con.push(s[i]);
    }
    if(p%2)printf("Yes");
    else printf("No");
    nl;
    return 0;
}
