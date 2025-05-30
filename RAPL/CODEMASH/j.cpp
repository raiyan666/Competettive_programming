#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    int p[12],x[12];
    //double rr;
    cin>>r;
    for(int i=0;i<11;i++){
        cin>>p[i]>>x[i];
        if(p[i]==0 ||p[i]>=10){
            cout<<"No\n";
            //continue;
        }
        else if((double(x[i])/p[i])>=double(r)){
            cout<<"No"<<endl;
        }
        else cout<<"Yes\n";
        // if(m>=r&& p!=0){
        //     cout<<m<<"\t"<<"No"<<endl;
        // }
        // else cout<<"Yes"<<endl;

    }
    
    return 0;
}