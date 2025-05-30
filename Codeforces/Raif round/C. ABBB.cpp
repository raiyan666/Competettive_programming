
#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    string s;
    cin.ignore();
    while(t--){
        cin>>s;
        stack<char>con;
        con.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(con.empty())con.push(s[i]);
            else if(s[i]=='B'){
                con.pop();
            }
            else  con.push(s[i]);
        }
        //int x=0;
        cout<<(int)(con.size())<<'\n';
    }
    return 0;
}
