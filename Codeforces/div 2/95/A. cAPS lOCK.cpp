#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    bool change=true;
    for(int i=1;i<s.size();++i)
        if(s[i]<'A'||s[i]>'Z')change=false;
    if(change){
        if(s[0]>='a'&&s[0]<='z')s[0]='A'+s[0]-'a';
        else s[0]='a'+s[0]-'A';
        for(int i=1;i<(int)(s.size());++i)
        if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]-'A'+'a';
    }

    cout<<s;
    return 0;
}
