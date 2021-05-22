#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s,t;
    cin>>s>>t;
    bool translated=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[t.size()-i-1]){
            translated=false;
            break;
        }
    }
    if(translated)printf("YES\n");
    else printf("NO\n");
    return 0;
}
