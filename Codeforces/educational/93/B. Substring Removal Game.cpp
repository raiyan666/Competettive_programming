#include <bits/stdc++.h>
#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
vector<int>con;
int main()
{
    fast_in_out
    int t,one=0;
    string s;
    cin>>t;
    while(t--)
    {
        one=0;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                one++;
                if(s[i+1]=='0'||s[i+1]=='\0'){
                    con.push_back(one);
                    //cout<<"one "<<one<<"\t";
                    one=0;
                }
            }
        }
        sort(con.begin(),con.end(),greater<int>());
        //reverse(con.begin(),con.end())
        int ans=0,n=1;
        for(vector<int>::iterator it=con.begin(); it!=con.end(); it++){
                if(n%2)if(!con.empty())ans+=*it;
                n++;
        }
            cout<<ans<<'\n';

        while(!con.empty())con.pop_back();
    }
    return 0;
}
