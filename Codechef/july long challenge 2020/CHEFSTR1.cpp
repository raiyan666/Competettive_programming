#include <stdio.h>
int absolute(int a,int b)
{
    int x=a-b;
    if(x>=0)return x;
    else return(x*(-1));

}
int main()
{
    int t;
    scanf("%d",&t);
    if(t>=1&&t<=10)
    while(t--)
    {
        int n,a,b,ans=0;
        scanf("%d",&n);
        if(n>=2&&n<=100000){
            scanf("%d",&a);
        for(int i=1;i<n;i++)
        {

            scanf("%d",&b);
            ans+=absolute(b,a)-1;
            a=b;
        }
        printf("%d\n",ans);
        }
    }
    return 0;
}
