#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        if(n==1) {
            cout<<"No"<<"\n";
            continue;
        }
        bool dit=true;
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-i-1]){
                if(s[i]<s[n-i-1]){
                    dit=false;
                    break;
                }
            }
        }
        if(dit){
            cout<<"Yes\n";
            continue;
        }
        bool universe=true;
        for (int i=0;i<n;i++){
            if(s[i]!=s[0]){
                universe=false;
                break;
            }
        }
        if(universe){
            cout<<"Yes\n";
            continue;
        }
        
        if(k>=1){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}