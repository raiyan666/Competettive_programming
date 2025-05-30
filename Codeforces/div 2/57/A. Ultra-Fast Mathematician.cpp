#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])printf("1");
        else printf("0");
    }
    printf("\n");
    return 0;
}
