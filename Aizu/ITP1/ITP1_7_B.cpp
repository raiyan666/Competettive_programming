#include <iostream>
using namespace std;
int main(){
    int x,n;
    while(cin>>n>>x&&(n!=0||x!=0)){
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                    if(i+j+k==x){
                        //cout<<i<<' '<<j<<' '<<k<<'\n';
                        ans++;
                    }
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
