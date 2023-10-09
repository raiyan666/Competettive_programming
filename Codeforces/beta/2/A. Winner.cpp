#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl              printf("\n")
using namespace std;
string s[1002];
int point[1002];
int main()
{
    fast_in_out
    map<string,int>pre,fin;
    int n,m=0,i;
    cin>>n;
    for(i=0;i<n;++i){
        cin>>s[i]>>point[i];
        pre[s[i]]+=point[i];
    }
    for(i=0;i<n;++i)m=max(m,pre[s[i]]);
    for(i=0;pre[s[i]]<m||(fin[s[i]]+=point[i])<m;++i);
    cout<<s[i];nl;
    return 0;
}
