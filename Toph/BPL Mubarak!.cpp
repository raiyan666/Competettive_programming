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
        int over=0,ball=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='W'||s[i]=='N'||s[i]=='D')continue;
            else ball++;
        }
        //  printf("%d BALLS",ball);
        over=ball/6;
        ball%=6;

        if(over){
            if(over>1)printf("%d OVERS",over);
            else printf("%d OVER",over);
        }
        if(over && ball)printf(" ");
        if(ball){
            if(ball>1) printf("%d BALLS",ball);
            else printf("%d BALL",ball);
        }
        nl;
    }
    return 0;
}
