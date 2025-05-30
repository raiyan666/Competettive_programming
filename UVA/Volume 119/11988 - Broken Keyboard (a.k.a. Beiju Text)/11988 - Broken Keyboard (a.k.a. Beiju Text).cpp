#include <bits/stdc++.h>
using namespace std;
queue<char>Home,End;
stack<char>tester;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s;
    while(cin>>s)
    {
        //if(s=="break")break;
        queue<char>Home;
        stack<char>tester,End;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==']')while(!tester.empty()){
                End.push(tester.top());
                tester.pop();
            }
            else if(s[i]=='[')while(!tester.empty()){
                Home.push(tester.top());
                tester.pop();
            }
            else tester.push(s[i]);
        }
        while(!tester.empty()){
            Home.push(tester.top());
            tester.pop();
        }
       while(!Home.empty()){
            cout<<Home.front();
            Home.pop();
        }
        while(!End.empty()){
            cout<<End.top();
            End.pop();
        }
         //while(!bracket.empty())bracket.pop();
        cout<<'\n';
    }
    return 0;
}
