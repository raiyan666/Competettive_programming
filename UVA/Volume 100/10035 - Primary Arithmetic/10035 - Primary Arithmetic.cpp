#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int one[11],two[11],sum[11];
    while(scanf("%d%d",&a,&b)&&(a||b)){
        for(int i=0;i<11;i++){
            one[i]=0;two[i]=0;sum[i]=0;
        }
        int cnt=0;
        for(int i=10;i>=0;i--){
            one[i]=a%10;
            a/=10;
            two[i]=b%10;
            b/=10;
            sum[i]=one[i]+two[i];
        }
        for(int i=10;i>0;i--)if(sum[i]>9)sum[i-1]++;
        for(int i=0;i<11;i++)if(sum[i]>9)cnt++;
        if(cnt)printf("%d",cnt);
        else printf("No");
        if(cnt>1)printf(" carry operations.\n");
        else printf(" carry operation.\n");
    }
    return 0;
}
