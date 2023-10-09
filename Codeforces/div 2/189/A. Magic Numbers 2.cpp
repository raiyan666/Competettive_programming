#include <bits/stdc++.h>
using namespace std;
int n;
bool judge(int n)
{
    if(n==1||n==14||n==144)return 1;
    else if(n%10==1)return judge(n/10);
    else if(n%100==14)return judge(n/100);
    else if(n%1000==144)return judge(n/1000);
    return  0;
}
int main()
{
    scanf("%d",&n);
    if(judge(n))printf("YES\n");
    else printf("NO\n");
}
