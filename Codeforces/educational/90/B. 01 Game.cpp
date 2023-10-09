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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        stack<char>con;
        cin>>s;
        int zero=0,one=0;
        for(int i=0;i<(int)(s.size());i++)
        {
            if(s[i]=='0')zero++;
            else one++;
        }
        int x=min(zero,one);
       // printf("%d\n",cnt);
        if(x==0)printf("NET\n");
        else{
            if(x%2==1)printf("DA\n");
            else printf("NET\n");
        }
    }
    return 0;
}
