#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>vowel={'A','E','I','O','U','Y','a','i','e','o','u','y'};
    string s;
    getline(cin,s);
    int len=s.size();
    char f;
    for(int i=0;i<len;i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))f=s[i];
    }
    //printf("%c",f);
    bool v=false;
    vector<char>::iterator it;
    for(it=vowel.begin();it!=vowel.end();it++)
        if(*it==f)v=true;
   //printf("NO\n");
    if(v) printf("YES\n");
    else printf("NO\n");
    return 0;
}
