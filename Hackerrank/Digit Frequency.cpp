#include <stdio.h>
#define nl              printf("\n")
int arr[10];
int main()
{
    char s[1003];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if('0'<=s[i]&&s[i]<='9')arr[s[i]-'0']++;
    }
    for(int i=0;i<=9;i++)printf("%d ",arr[i]);
    nl;
    return 0;
}
