#include<bits/stdc++.h>

#define forn(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n,x,y,z,m;
    cin>>n>>x>>y>>z;
    vector<bool>val(x+y+z,1);
    vector<int>xtr(n),xtr2(n),ans;
    map<int,vector<int>>math,eng,sum;
    forn(n){
        cin>>m;
        math[m].push_back(i);
        xtr[i]=m;
    }
    forn(n){
        cin>>m;
        eng[m].push_back(i);
        xtr2[i]=m;
    }
    forn(n){
        //cin>>x;
        sum[xtr[i]+xtr2[i]].push_back(i);
        
    }
    int cnt=0;
    for(auto it=math.rbegin();it!=math.rend();it++){
        if(cnt+1>x)break;
        //cout<<itr->first<<"\t";
        
        for(auto itr=it->second.begin();itr!=it->second.end();itr++){
            //cout<<it->first<<"\t";
            
            
            if(val[*itr]){
                val[*itr]=0;
                cnt++;
            //cout<<*itr<<'\t';
                ans.push_back(*itr);
            }
            //cnt++;
            if(cnt+1>x)break;
        }
        //if(cnt+1>x)break;
    }
    cnt=0;
    for(auto it=eng.rbegin();it!=eng.rend();++it){
        if(cnt+1>y)break;
        for(auto itr=it->second.begin();itr!=it->second.end();itr++){
            if(val[*itr]){
                val[*itr]=0;
                cnt++;
                
                ans.push_back(*itr);
            }
            if(cnt+1>y)break;
        }
        //if(cnt+1>x)break;
    }
    cnt=0;
    for(auto it=sum.rbegin();it!=sum.rend();++it){
        if(cnt+1>z)break;
        for(auto itr=it->second.begin();itr!=it->second.end();itr++){
            if(val[*itr]){
                val[*itr]=0;
                cnt++;
                //cout<<*itr+1<<'\t';
                ans.push_back(*itr);
            }
            if(cnt+1>z)break;
        }
        //if(cnt+1>x)break;
    }
     sort(ans.begin(),ans.end());
     for(auto it=ans.begin();it!=ans.end();it++){
        cout<<*it+1<<"\n";
     }
    
    return 0;
}