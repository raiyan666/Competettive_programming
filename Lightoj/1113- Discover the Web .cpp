#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":\n";
        stack<string>Forward,Backward;
        string Fun,current("http://www.lightoj.com/");
        while(cin>>Fun)
        {
            if(Fun=="QUIT")
            {
                break;
            }
            else if(Fun=="VISIT")
            {
                Backward.push(current);
                cin>>current;
                while(!Forward.empty())
                {
                    Forward.pop();
                }
                cout<<current<<"\n";

            }
            else if(Fun=="BACK")
            {
                if(Backward.empty())
                {
                    cout<<"Ignored\n";
                    continue;
                }
                Forward.push(current);
                current=Backward.top();
                Backward.pop();
                cout<<current<<"\n";
            }
            else if(Fun=="FORWARD")
            {
                if(Forward.empty())
                {
                    cout<<"Ignored\n";
                    continue;
                }
                Backward.push(current);
                current=Forward.top();
                Forward.pop();
                cout<<current<<"\n";
            }
        }
    }
    return 0;
}
