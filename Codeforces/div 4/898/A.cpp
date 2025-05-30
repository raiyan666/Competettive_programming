#include <bits/stdc++.h> 
#define ll long long 

#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        //cout<<s[0];
        if(s[0]=='a' || s[1]=='b' || s[2]=='c') cout<<"yes"<<'\n';
        else cout<<"no\n";
    }
    return 0;
}