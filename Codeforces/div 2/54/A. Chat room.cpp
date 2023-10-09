#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    string s,t="hello";
    int cur=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==t[cur]){
            cur++;
            if(cur==5){
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
