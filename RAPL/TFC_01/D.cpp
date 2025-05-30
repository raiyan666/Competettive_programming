#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,f;
    cin>>n>>f;
    map<int,int>vis;
    vector<int>ans;
    int floor[105];
    for(int i=0;i<n;i++){
        cin>>floor[i];
        vis[floor[i]]=0;
    }
    for(int i=0;i<n;i++){
        if(floor[i]>=f){
            while(f<=floor[i]){
                if(vis.count(f)&& vis[f]==0){
                    vis[f]=1;
                    ans.push_back(f);
                    //cout<<f<<'\t';
                    //cout<<i<<" first loop "<<f<<'\n';
                    //continue;
                }
                
                //cout<<i<<" first loop "<<f<<"floor[i] "<<floor[i]<<'\n';
                f++;
            }

        }
        else {
            while(f>=floor[i]){
                if(vis.count(f) && vis[f]==0){
                    vis[f]=1;
                    ans.push_back(f);
                    //cout<<f<<'\t';
                    //cout<<i<<" second loop "<<f<<'\n';
                    //continue;
                }
                //cout<<i<<" second loop "<<f<<'\n';
                f--;
            }

        }
        
        
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(i!=n-1)cout<<ans[i]<<" ";
        else cout<<ans[i]<<'\n';
    }
    //cout<<ans[3]<<endl;
    return 0;
}