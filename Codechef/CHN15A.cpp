#include <iostream>
#include <cmath>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,k,ans=0;
        cin>>n>>k;
        int remainder=k%7;
        FOR(i,0,n){
                int char_value;
                cin>>char_value;
                while(char_value<0)
                {
                    char_value+=7;
                }
                char_value=((char_value%7)+remainder)%7;
                if(!char_value)
                {
                    ans++;
                }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
