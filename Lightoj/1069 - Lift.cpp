#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int st,lift,ans;
        scanf("%d%d",&st,&lift);
        if(st==0) continue;
        ans=(abs(lift-st)+st)*4+19;
        printf("Case %d: %d\n",i,ans);
    }
}
