#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        //map<string,int>mymap;
        int m;
        cin>>m;
        bool drunk=false;
        while(m--)
        {
            string s1,s2;
            cin>>s1>>s2;
            if((s1=="soda"||s2=="water")&&s2=="wine")
            {
                drunk=false;
            }
        }
        cout<<"Case "<<i<<": ";
        cout<<(drunk?"Yes" : "No")<<'\n';
    }
    return 0;
}
