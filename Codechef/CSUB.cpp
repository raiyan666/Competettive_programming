#include <iostream>
#include <string>

using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int len;
        string input;
        cin>>len>>input;
        long long count_num=0;
        long long one=0;
        for(int i=0;i<len;i++)
        {
            if(input[i]=='1')
            {
                one++;
            }
        }
        count_num=(one*(one+1))/2;
        cout<<count_num<<"\n";
    }
    return 0;
}
