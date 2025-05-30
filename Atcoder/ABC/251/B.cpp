#include<bits/stdc++.h>
#define ll long long 
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
    
    // }
    
    int n,w,m,sum=0;
    cin>>n>>w;
    vector<bool>flag(w,1);
    vector<int>vi(n);
    forn(n)cin>>vi[i];
    forn(n){
        if(vi[i]<w&& flag[vi[i]]){
            sum++;
            flag[vi[i]]=0;
        }
    }
    for(int j=0;j<n;j++){
        for(int i=j+1;i>=0;i--){
            m=vi[i]+vi[j];
            if(m<=w && flag[m]==1){
                ++sum;
                flag[m]=0;
            }
        }
    }
    for(int j=0;j<n;j++){
        for(int i=j+1;i<n;i++){
            for(int k=i+1;k<n;k++){
                m=vi[i]+vi[j]+vi[k];
                if(m<=w && flag[m]){
                    flag[m]=0;
                    ++sum;
                }

            }
            
        }
    }
    cout<<sum<<'\n';
    //sort(vi.begin(),vi.end());

    return 0;
}