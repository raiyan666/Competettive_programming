#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while(getline(cin,s)){
        int cnt=0;
        for(int i=0;i<s.size();i++)
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            if((s[i+1]>='a'&&s[i+1]<='z')||(s[i+1]>='A'&&s[i+1]<='Z'))continue;
            else cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}