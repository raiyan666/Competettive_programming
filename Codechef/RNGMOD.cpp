#include <iostream>
using namespace std;
//#define MAX 100001
int main()
{
    int N,m,k;
    scanf("%d%d%d",&N,&m,&k);
    int arr[N]={0},sum[N]={0};
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        sum[i]=sum[i-1]+arr[i];
        //printf("%d\t",sum[i]);
    }
    //printf("\n");

    while(m--)
    {
        int L,R,ans;
        scanf("%d%d",&L,&R);
        int mod_l=sum[R]%k;
        int mod_r=sum[L-1]%k;
        ans=(mod_l-mod_r)%k;
        printf("%d\n",ans);
    }
    return 0;
}
