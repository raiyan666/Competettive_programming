#include <iostream>
#include <string>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int N,C,sum=0;
        cin>>N>>C;
        int a;
        for(int i=0;i<N;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum>C)cout<<"No"<<'\n';
        else cout<<"Yes\n";
    }
    return 0;
}
