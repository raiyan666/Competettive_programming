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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string arr;
        int n,k,st=0,en=0,sol=0;
        char f,l;
        scanf("%d%d",&n,&k);
        bool state=false;
        cin>>arr;
        //scanf("%s",arr);
        for(int i=0;i<n;i++)
        {

            if(arr[0]=='1'){
                f='1';
               // l='0';
            }
            else if(arr[0]=='0'){
                f='0';
               // l='1';
            }
            if(arr[i]==f && state==false){
                state=true;
                st=i;
            }
            else if(arr[i]==f&& state==true){
                state=false;
                en=i;
                int dis=en-st;
                if(k==1)sol+=(dis/(2*k));
                else sol+=(dis/k);
            }
        }
        printf("%d\n",sol);
    }
    return 0;
}
