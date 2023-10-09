#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    fast_in_out
    string s;
    bool state=false;
    while(getline(cin,s))
    {
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]=='"'){
                if(!state){
                    state=!state;
                    cout<<"``";
                }
                else {
                    state=!state;
                    cout<<"''";
                }
            }
            else cout<<s[i];
            i++;
        }
        cout<<'\n';
    }
    return 0;
}
