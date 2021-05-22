#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,m,n,ans=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d",&m,&n);
        int multiplication=m*n;
        if(m==1||n==1)
        printf("Case %d: %d\n",i,multiplication);
        else if(m==2||n==2){
            ans=(multiplication/8)*4+((multiplication%8)>=4?4:(multiplication%8));
            printf("Case %d: %d\n",i,ans);
        }
        else printf("Case %d: %d\n",i,(multiplication+1)/2);
    }
    return 0;
}
