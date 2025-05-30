#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,len=str.size(),temp=0,ans=0;
    for(i=0;i<=len;i++)
        {
            temp++;
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'||str[i]=='\0'){
            if(temp>ans)
            {
                ans=temp;
            }
            temp=0;
            }

        }
        cout<<ans<<'\n';
    return 0;
}
