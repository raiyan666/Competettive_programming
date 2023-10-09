#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;
char ch[303][303];
int main()
{
    map<char,int>con;
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    int t;cin>>t;
    cin.ignore();
    for(int i=1;i<=t;i++)
        for(int j=1;j<=t;j++)cin>>ch[i][j];

        //cout<<ch[t][2]<<'\t';
    bool hobe=true;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=t;j++){
            con[ch[i][j]]++;
            if(j==i||i==(t-j+1)){
                if(ch[i][j]!=ch[1][1]||ch[i][j]!=ch[1][t]){
                        //cout<<"n\t";
                        hobe=false;
                        }
            }
            else if(ch[i][j]!=ch[1][2]||ch[i][j]!=ch[t][2]){
                    //cout<<i<<' '<<j<<' '<<ch[i][j]<<"\t";
                    hobe=false;}
        }
    }
    if(con[ch[1][1]]!=(t*2)-1&&con[ch[1][2]]!=((t*t)-((t*2)-1)))hobe=false;
    if(hobe)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
