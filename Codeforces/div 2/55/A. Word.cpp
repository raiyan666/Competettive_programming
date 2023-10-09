#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int up=0,low=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')up++;
        else low++;
    }
    if(up>low){
            //int i;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-'a'+'A';
        printf("%c",s[i]);
        }
    }
    else {
        //int i;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+'a'-'A';
            printf("%c",s[i]);
        }
    }
    printf("\n");

    return 0;
}
