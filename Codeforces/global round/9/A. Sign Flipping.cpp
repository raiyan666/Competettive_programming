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
int arr[100],dif[100];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&arr[i]);
        int pos=0,non_pos=0;
        for(int i=1;i<n;i++)
        {
            dif[i]=arr[i]-arr[i-1];
            if(dif[i]>0)pos++;
            else if(dif[i]<0)non_pos++;
        }
        if(pos==non_pos)
            for(int i=0;i<n;i++)printf("%d ",arr[i]);
        else{
                int i;
                int x=abs(pos-non_pos);
                printf("%d",x);
                //if(pos>non_pos)
                //{
                    if(dif[i]>0)i=1;
                    else i=2;

                    while(x--){
                        arr[i]*=-1;
                        i+=2;
                    }

                //}
                /*else{
                    if(dif[i]>0)i=1;
                    else i=2;
                    while(x--){
                        arr[i]*=1;
                        i+=2;
                    }
                }*/
            for(int i=0;i<n;i++)printf("%d ",arr[i]);

        }


        printf("\n");
    }
    return 0;
}
