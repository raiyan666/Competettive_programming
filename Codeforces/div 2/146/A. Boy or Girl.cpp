#include <bits/stdc++.h>
using namespace std;
int vis[50];
char s[105];
int main()
{
    //string s;
    scanf("%s",s);
    for(int i=0;i!='\0';i++)vis[s[i]-'a']++;
    int ans=0;
    for(int i=0;i<26;i++)if(vis[i])ans++;
    if(ans&1)printf("IGNORE HIM!\n");
    else printf("CHAT WITH HER!\n");
    return 0;
}
