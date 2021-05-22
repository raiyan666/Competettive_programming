#include <bits/stdc++.h>
#define ll             unsigned long long

using namespace std;
ll power_of_two[65];
int main()
{
    power_of_two[0]=1;
    for(int i=1;i<63;i++)power_of_two[i]=power_of_two[i-1]*2;
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        ll n;
        scanf("%lld",&n);
        int j;
        bool value=false;
        for(j=1;j<63;j++){
        //while(!((n%power_of_two[j]!=0) && ((n/power_of_two[j])%2!=1))){
            //j++;
            //if(j==63)break;
            if((n%power_of_two[j]==0)&&(n/power_of_two[j])%2==1){
                value=true;
                break;
            }
        }
        if(!value)printf("Case %d: Impossible\n",i);
        else printf("Case %d: %lld %lld\n",i,n/power_of_two[j],power_of_two[j]);
    }
    return 0;
}
