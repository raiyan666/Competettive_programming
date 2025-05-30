#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr[]={'A', 'O', 'Y', 'E', 'U', 'I','a','e','i','o','u','y'};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        char *p;
        p=find(arr,arr+12,s[i]);
        if(p!=arr+12)continue;
        printf(".");
        if(s[i]>='A'&&s[i]<='Z')s[i]='a'+s[i]-'A';
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
