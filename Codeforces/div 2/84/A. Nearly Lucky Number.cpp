#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int lucky=0;
    for(int i=0;i<s.size();i++)
        if(s[i]=='4'||s[i]=='7')
        lucky++;
        char a;

   // if(lucky/10)char b='0'+lucky/10;
    if(lucky==4||lucky==7)
    printf("YES\n");
    else printf("NO\n");
    return 0;
}
