#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        for(int i=0;i<(int)(s.size());i++){
            cout<<(char)(s[i]-7);
        }
        cout<<'\n';
    }
    return 0;
}
