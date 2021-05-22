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
    vector<int>a(3);
    cin>>a[0]>>a[1]>>a[2];
    int week,day;
    week=min({a[0]/3,a[1]/2,a[2]/2});
    //week=min(week,);
    a[0]-=(week*3);
    a[1]-=week*2;
    a[2]-=week*2;
    vector <int> gourmet{1,0,0,1,2,0,2};
    int sol=0;

    for(int i=0;i<7;i++){
        vector<int>b(a);
        int current=i,temp=0;
        while(b[gourmet[current]]>0)
        {
            b[gourmet[current]]--;
            current=(++current)%7;
            temp++;
        }
        sol=max(sol,temp);
    }
    int ans=(7*week)+sol;
    printf("%d\n",ans);
    return 0;
}
