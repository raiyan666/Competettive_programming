#include <bits/stdc++.h>
using namespace std;
int main()
{
    int page,sum=0;
    scanf("%d",&page);
    int arr[8];
    for(int i=1;i<=7;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int x=page/sum;
    if(page%sum==0)--x;
    int i;
    page-=(x*sum);
    for(i=1;i<=7;i++)
    {
        page-=arr[i];
        if(page<=0)break;
        //printf("%d\n",page);
    }
    printf("%d\n",i);
        //return 0;
    return 0;
}
