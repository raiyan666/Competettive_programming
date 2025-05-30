#include <iostream>
using namespace std;
//#define MAX 100001
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n]={0},sum[n]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum[i]=sum[i-1]+arr[i];
        //printf("%d\t",sum[i]);
    }
    //printf("\n");
    int query;
    scanf("%d",&query);
    while(query--)
    {
        int L,R,ans;
        scanf("%d%d",&L,&R);
        ans=sum[R]-sum[L-1];
        printf("%d\n",ans);
    }
    return 0;
}
