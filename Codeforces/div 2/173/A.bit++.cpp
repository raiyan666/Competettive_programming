#include <iostream>
#include <string>
using namespace std;
#define FOR(i,a,n) for(register int i=(a);i<(int)(n);++i)
int main()
{

    int test;
    cin>>test;
    int x=0;
    string str;
    while(test--)
    {
        cin>>str;
        if(str[0]=='+')
        {
            x++;
        }
        else if(str[0]=='-')
        {
            x--;
        }
        else if(str[2]=='+')
        {
            x++;
        }
        else{
            x--;
        }
    }

    cout<<x<<'\n';
}
