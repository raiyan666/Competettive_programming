#include <iostream>
#include <cstdio>
//#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;
int main()
{
    //fast_in_out
    int t,r1,c1,r2,c2,ans;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        ans=-1;
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        if(abs(r2-r1)==abs(c2-c1))ans=1;

        else if((r1%2==c1%2 )==( r2%2==c2%2))ans=2;
        printf("Case %d: ",i);
        if(ans==-1)printf("impossible\n");
        else printf("%d\n",ans);
    }
}
