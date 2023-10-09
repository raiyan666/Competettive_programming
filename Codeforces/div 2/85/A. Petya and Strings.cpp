#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size();i++)
    {
        char cmp1,cmp2;
        if(s[i]>='a'&&s[i]<='z')cmp1=s[i];
        else if(s[i]>='A'&&s[i]<='Z')cmp1=s[i]-'A'+'a';
        if(t[i]>='a'&&t[i]<='z')cmp2=t[i];
        else if(t[i]>='A'&&t[i]<='Z')cmp2='a'+(t[i]-'A');
        //printf("%c%c\t",cmp1,cmp2);
        if(cmp1<cmp2){
            printf("-1\n");
            return 0;
        }
        else if(cmp1>cmp2)
        {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
