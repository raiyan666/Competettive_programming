#include <bits/stdc++.h>

using namespace std;
int arr[27];
int main()
{
    int ans=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z')arr[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)if(arr[i])ans++;
    cout<<ans<<'\n';
    return 0;
}
