#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        bool out=true;
        string input;
        cin>>input;
        int len=input.size();

        for(int i=0,j=len-1;i<len/2;i++,j--)
        {
            if(input[i]!=input[j])
            {
                out=false;
            }
        }
        if(!out){
        if(len%2==0){
            for(int i=0,j=(len/2)+1;i<len/2;i++,j++)
            {
            if(input[i]==input[j])
            {
                out=true;
            }
            else{
                out=false;
            }
            }
        }
        else{
            for(int i=0,j=(len/2);i<len/2;i++,j++)
            {
            if(input[i]!=input[j])
            {
                out=true;
            }
            else{
                out=false;
            }
            }
        }
        }
        cout<<(out? "YES" : "NO")<<'\n';

    }
    return 0;
}
