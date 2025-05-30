#include <bits/stdc++.h>
using namespace std;
int a[101],b[101];
int main()
{
    int n,m,maxim=0,lim;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]<=maxim)maxim=a[i];
        b[i]=a[i]/m;
        if(a[i]%m)b[i]++;
    }
    int pos=0,maximum=0;
    for(int i=1;i<=n;i++)
        if(b[i]>=maximum)
        {
            maximum=b[i];
            pos=i;
        }
    printf("%d\n",pos);
    return 0;
}
