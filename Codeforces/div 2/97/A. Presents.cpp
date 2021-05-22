#include <bits/stdc++.h>
using namespace std;
//int a[102];
int main()
{
    int n;scanf("%d",&n);
    int a[n+2];
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        a[x]=i;
    }
    for(int i=1;i<=n;i++)printf("%d ",a[i]);
    printf("\n");
    return 0;
}
