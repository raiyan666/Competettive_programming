#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans=0;
    scanf("%d",&t);
    char pre,curr;
    scanf("%c",&curr);
    pre=curr;
    for(int i=1;i<=t;i++)
    {
        scanf("%c",&curr);
        if(curr==pre)
                ans++;
            //printf("%d",ans);
        pre=curr;
    }
    printf("%d\n",ans);
    return 0;
}
