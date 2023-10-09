#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>con;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')continue;
        con.push_back(s[i]-'0');
    }
    int lim=con.size()-1;
    sort(con.begin(),con.end());
    for(int i=0;i<=lim;i++)
    {
        printf("%d",con[i]);
        if(i!=(lim))printf("+");
    }
    printf("\n");
    return 0;
}
