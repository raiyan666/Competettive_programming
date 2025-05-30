#include <iostream>
using namespace std;
int main()
{
    int H,W;
    while(cin>>H>>W)
    {
        for(int i=0;i<W;i++)cout<<"#";
        cout<<'\n';

        for(int j=1;j+1<H;j++)
        {
            cout<<"#";
            for(int i=1;i+1<W;i++)cout<<".";
            cout<<"#\n";
        }


        for(int i=0;i<W;i++)cout<<"#";
        cout<<'\n';

        cout<<'\n';
    }

}
