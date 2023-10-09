#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int AB=0,BA=0,ABA=0,BAB=0;
    //bool first=false,second=false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A'&&s[i+1]=='B'){
            //cout<<s[i]<<s[i+1];
           // first=true;
       // cout<<i;
            i++;
            AB++;
           // cout<<i;
            if(s[i+1]=='A'){
                i++;
                ABA++;
                AB--;
            }
            //cout<<i;
        }
        if(s[i]=='B'&&s[i+1]=='A'){
            //cout<<s[i]<<s[i+1];
           // second=true;
            i++;
            BA++;
            if(s[i+1]=='B'){
                i++;
                BAB++;
                BA--;
            }
        }
    }
   // AB+=()
    if(AB<1&&ABA>0){
        ABA--;
        AB++;
    }
    if(BA<1&&ABA>0){
        ABA--;
        BA++;
    }
    if(BA<1&&BAB>0)
    {
        BA++;
        BAB--;
    }
    if(AB<1&&BAB>0){
        AB++;
        BAB--;
    }
    if(AB>0&&BA>0)printf("YES\n");
    else printf("NO\n");
    return 0;
}
