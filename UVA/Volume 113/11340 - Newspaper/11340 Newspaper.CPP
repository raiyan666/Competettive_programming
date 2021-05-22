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
map<char,double>cost;
map<char,double>::iterator it;
int main()
{
    fast_in_out
    //freopen("11340-Newspaper_INPUT.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char c;
        double b;
        for(int i=0;i<=n;++i)
        {
            cin>>c>>b;
            cost[c]=b;
        }
        int l;
        double ans=0.00;
        scanf("%d",&l);
        cin.ignore();
        while(l--)
        {
            string line;
            getline(cin,line);
            int ln=(int)line.size();
            for(int i=0;i<ln;++i)
            {
                it=cost.find(line[i]);
                if(it!=cost.end())ans+=it->ss;
            }
        }
        ans=(double)(ans/100.00);
        printf("%.2lf$\n",ans);
        cost.clear();
    }
    return 0;
}
