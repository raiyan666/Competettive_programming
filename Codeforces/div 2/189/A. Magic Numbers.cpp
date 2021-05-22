#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s;
    cin>>s;
    int four=0,maximum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'){
            continue;
        }
        else if(s[i]=='4'){
            if((s[i-1]=='1')||(s[i-2]=='1'))
            continue;
            else
            {
                printf("NO\n");
                return 0;
            }
        }
        else{
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
