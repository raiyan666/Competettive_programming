#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++)sum+=(int)(s[i]-'0');
    if(sum%3==0)cout<<"Yes";
    else cout<<"No";
    return 0;
}
