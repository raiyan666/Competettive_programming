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

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        stack<char>con;
        int loop;
        cin>>loop;
        string s;
        cin>>s;
        for(int i=loop;i>=0;i--)
        {
            if(!con.empty()){
                if(con.top()==')'&&s[i]=='(')con.pop();

                else con.push(s[i]);
                }
            else con.push(s[i]);
        }
        printf("%d\n",con.size()/2);
    }
    return 0;
}
