#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<char>ans;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')ans.push_back('0');
        else if(s[i]=='-'&&s[i+1]=='.')
        {
            ans.push_back('1');
            i++;
        }
        else if(s[i]=='-'&&s[i+1]=='-')
        {
            ans.push_back('2');
            i++;
        }
    }
    for(int i=0;i<ans.size();i++)printf("%c",ans[i]);
    printf("\n");
    return 0;
}
