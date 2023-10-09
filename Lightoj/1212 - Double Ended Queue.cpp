#include <bits/stdc++.h>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);cin.tie(0);
    deque <int> line;
    int test;
    cin>>test;
    //cin.ignore();
    for(int i=1;i<=test;i++)
    {
        cout<<"Case "<<i<<":\n";
        int sz,loop;
        cin>>sz>>loop;
        cin.ignore();

        while(loop--)
        {
            string cmd;
            cin>>cmd;
            cin.ignore();
            if(cmd=="pushLeft")
            {
                if(sz){
                sz--;
                int item;
                cin>>item;
                cin.ignore();
                line.push_back(item);
                cout<<line.size()<<" :line size\n";
                cout<<"Pushed in left: "<<line.back()<<"\n";
                }
                else{
                    cout<<"The queue is full\n";
                }
            }
            else if(cmd=="pushRight")
            {
                if(sz){
                sz--;
                int item;
                cin>>item;cin.ignore();
                line.push_front(item);
                cout<<line.size()<<" :line size\n";
                cout<<"Pushed in right: "<<line.front()<<"\n";
                }
                else{
                    cout<<"The queue is full\n";
                }
            }
            else if(cmd=="popLeft")
            {
                if(!line.empty())
                {
                    sz++;
                    cout<<"Popped from left: "<<line.back()<<"\n";
                    cout<<line.size()<<" :line size\n";
                    line.pop_back();
                }
                else{
                    cout<<"The queue is empty\n";
                }
            }
            else if(cmd=="popRight")
            {
                if(!line.empty())
                {
                    sz++;
                    cout<<"Popped from right: "<<line.front()<<"\n";
                    cout<<line.size()<<" :line size\n";
                    line.pop_front();
                }
                else{
                    cout<<"The queue is empty\n";
                }
            }
        }
    }
    return 0;
}
