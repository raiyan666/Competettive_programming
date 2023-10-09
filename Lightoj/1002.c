#include <stdio.h>

int main()
{
    int test;
    scanf("%d",&test);

    for(int loop=0;loop<test;loop++)
    {
        int sum;

        scanf("%d",&sum);
        int number1=sum%10;
        int number2=sum-number1;
        printf("%d %d\n",number1,number2);
    }
    return 0;
}
