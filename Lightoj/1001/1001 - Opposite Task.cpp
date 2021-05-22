#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int sum;

        scanf("%d",&sum);
        if(sum<0||sum>20)
           {
               break;
           }
        int r=sum/2;
        int y=r;
        if(sum%2)y=r+1;
        else y=r;
        printf("%d %d\n",r,y);
    }
    return 0;
}
