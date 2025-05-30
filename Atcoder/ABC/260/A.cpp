#include<bits/stdc++.h>
#define ll long long 
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0;i<3;i++){
        mp[s[i]]++;
    }
    bool val=0;
    for (auto i = mp.begin(); i != mp.end(); ++i) {
        if(i->second==1){
            cout<<i->first<<'\n';
            return 0;
        }
  //cout << i->first << ": " << i->second << endl;
  
    }
    cout<<"-1\n";
    // int t;
    // cin>>t;
    // while(t--){
    
    // }
    return 0;
}