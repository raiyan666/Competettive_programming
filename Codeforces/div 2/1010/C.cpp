#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        long long int x,m,n;
        cin>>x>>n>>m;
        long long int maxx=x,minn=x;
        long long int loop=m+n;
        while(loop--){
            if(maxx%2==1)  {
                maxx/=2;
                maxx++;
            }
            else{
                maxx/=2;
            }
            if(maxx==0) break;
        }
        loop=m+n;
        while(loop--){
            if(minn%2==0)  {
                minn/=2;
                minn++;
            }
            else{
                minn/=2;
            }
            if(minn==0) break;

        }
        cout<<minn<<" "<<maxx<<'\n';

    }
    return 0;
}