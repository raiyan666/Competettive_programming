#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    map<char,char>k;
    char arr[]={'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','A','S','D','F','G','H','J','K','L',';','\'','Z','Z','X','C','V','B','N','M',',','.','/','\0'};
    for(int i=1;arr[i]!='\0';i++)k[arr[i]]=arr[i-1];
    k[' ']=' ';
    //for(auto it=k.begin();it!=k.end();it++)cout<<it->second;
    while(getline(cin,s)){
        for(int i=0;s[i]!='\0';i++){
            //cout<<s[i]<<'=';
            cout<<k[s[i]];
        }
        cout<<'\n';
    }
    return 0;
}
