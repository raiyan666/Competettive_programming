#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        scanf("%d%d",&m,&n);
        if(m%n==0)
        {
            printf("YES\n");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}
