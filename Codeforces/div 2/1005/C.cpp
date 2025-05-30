#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int> suffix(n+1,0),prefix(n+1,0);

    for(int i=1;i<=n;i++){
        if(a[i-1]>0){
            prefix[i]=prefix[i-1]+a[i-1];
        }
        else{
            prefix[i]=prefix[i-1];
        }
        cout<<prefix[i]<<" ";

    }
    cout<<'\n';
    for(int i=n;i>=1;--i){
        if(a[i-1]<0){
            suffix[i]=suffix[i+1]-a[i];
        }
        else{
            suffix[i]=suffix[i+1];
        }
        cout<<suffix[i]<<" ";
    }
    cout<<'\n';
}
int main(){
    // ios::sync_with_stdio(false);
    // cin>>t;
    // while(t--){
    solve();
    // }

    return 0;
}
