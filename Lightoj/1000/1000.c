#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    if(t<=125)
    {
            int sum[t];
            for(int j=0;j<t;j++)
            {
                int number1,number2;
                scanf("%d %d",&number1,&number2);
                sum[j]=number1+number2;
            }
            for(int j=0;j<t;j++)
            {
                printf("Case %d: %d\n",j+1,sum[j]);
            }

    }
    return 0;
}
