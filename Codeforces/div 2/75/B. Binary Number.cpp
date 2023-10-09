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

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout.tie(nullptr);
#define nl              printf("\n")
using namespace std;
int main()
{
    fast_in_out

    string s;
    cin>>s;
    int ans=0;

    while((int)(s.size())>1){
        if(s.back()=='1')
        {
            int i;
            for(i=(int)(s.size())-1; i>=0 && s[i]=='1';i--){
                s[i]--;
            }
            if(i==-1)s='1'+s;
            else s[i]++;;
        }
        else{
            s.pop_back();
        }
        ans++;
    }
    cout<<ans<<'\n';
    return 0;
}
