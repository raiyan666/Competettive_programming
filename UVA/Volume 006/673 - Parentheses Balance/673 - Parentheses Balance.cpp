#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;

int main()
{
    fast_in_out
    stack<char>br;
    int t;
    cin>>t;
    string f;
    getline(cin,f);
    while(t--)
    {
        string s;
        getline(cin,s);
        if(!s.empty())
        {
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]==')'||s[i]==']')br.push(s[i]);
            else  if(s[i]=='('&&!br.empty()){
                if(br.top()==')')br.pop();
                else br.push(s[i]);
            }
            else  if(s[i]=='['&&!br.empty()){
                if(br.top()==']')br.pop();
                else br.push(s[i]);
            }
            else if((s[i]=='('&&br.empty())||s[i]=='['&&br.empty())br.push(s[i]);
            else continue;

            }
        }
        if(s.empty()||br.empty())printf("Yes\n");
        else printf("No\n");
        while(!br.empty())br.pop();
    }
    return 0;
}
