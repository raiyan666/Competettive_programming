#include <bits/stdc++.h>

int arr[102];
int main()
{
    int lvl,n;
    scanf("%d",&lvl);


    for(int i=1;i<=2;i++)
    {
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            int s;
            scanf("%d",&s);
            arr[s]=1;
        }
    }
    bool guy=true;
    for(int j=1;j<=lvl;j++)
    if(arr[j]==0){
        guy=false;
        break;
    }
    if(guy)printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");
    return 0;
}
