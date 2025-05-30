#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int ans=0;
    string inp;
    cin>>inp;
    while(inp.size()>1)
    {
        int len=inp.size();
        int sum=0;
        for(int i=0;i<len;i++)
        {
            int temp_int=inp[i]-'0';
            sum+=temp_int;
        }
        ans++;
        stringstream ss;
        ss<<sum;
        inp=ss.str();
    }
    cout<<ans<<'\n';
    return 0;
}
