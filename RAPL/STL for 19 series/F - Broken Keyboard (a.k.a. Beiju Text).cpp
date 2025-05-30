#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    while((scanf("%s",&input))!=EOF)
    {
        stack<char>sign;
        queue<char>text;
        queue<char>beiju;
        for(int i=0;i<input.size();i++)
        {
            if((input[i]!='['||input[i]!=']')&&sign.top()!='[')
            {
                text.push(input[i]);
            }
            else if(input[i]=='[')
            {
                sign.push('[');
            }
            else if(sign.top()=='[')
            {
                if(input[i]==']')
                {
                    sign.pop();
                }
                else{
                    beiju.push(input[i]);
                }
            }
        }
        for(auto it=beiju.begin();it!=beiju.end();it++)
        {
            cout<<*it;
        }
        for(auto it=text.begin();it!=text.end();it++)
        {
            cout<<*it;
        }
        cout<<'\n';
    }

    return 0;
}
