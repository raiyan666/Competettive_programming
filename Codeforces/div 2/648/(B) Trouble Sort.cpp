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
//#define nl              printf("\n");
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        bool state=false;
        int n;
        scanf("%d",&n);
        pair<int,char>arr3[1000];
        int arr[1000];
        char arr2[1000];
        int zero=0,one=1;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%c",&arr2[i]);
            if(arr2[i]=='0') zero++;
            else one++;
        }
        if(one>0&&zero>0) state=true;
        else{
            for(int i=1;i<n;i++){
                if(arr[i]>=arr[i-1]) state=true;
                else
                {state=false;
                break;
                }
            }
        }
    }
    return 0;
}

