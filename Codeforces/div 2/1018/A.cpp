#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int biggest=n;
    vector<int>v(n+1,0);
    for(int i=n-1;i>=0;i--){
        if(s[i]=='>'){
            v[i+1]=biggest;
            biggest--;            
        }
        // cout<<s[i];
    }
    // v[0]=biggest;
    int j=1;
    for(int i=n-1;i>=0;i--){
        if(v[i]==0){
            v[i]=j;
            j++;
        }
        // cout<<s[i];
    }

    // v[0]=small;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<'\n';
}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}