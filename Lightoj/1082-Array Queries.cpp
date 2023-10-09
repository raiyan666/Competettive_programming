#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
int arr[100005];
using namespace std;
int minimum(int l,int m)
{
    int mini=arr[l];
    for(int x=l;x<=m;x++)
    {
        if(arr[x]<mini)mini=arr[x];
    }
    return mini;
}
int main()
{
    //fast_in_out
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
        //nl;
        int n,q;
        scanf("%d%d",&n,&q);
        for(int i=1;i<=n;i++)scanf("%d",&arr[i]);
        int i,j;
        printf("Case %d:\n",k);
        while(q--)
        {
            scanf("%d%d",&i,&j);
            if(i>j)swap(j,i);
            //--i;--j;
            printf("%d\n",minimum(i,j));
        }
    }
    return 0;
}
