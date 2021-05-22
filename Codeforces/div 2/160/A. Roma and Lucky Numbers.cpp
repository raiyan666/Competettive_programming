#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0;
    scanf("%d%d",&n,&k);
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int x=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='4'||s[i]=='7')x++;
        }
        if(x<=k)ans++;
    }
    printf("%d\n",ans);
    return 0;
}
