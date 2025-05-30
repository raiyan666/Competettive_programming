#include <bits/stdc++.h>
using namespace std;
int current[25];
bool state[25];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,c,test=0,sum,x,maximum;
    bool blown;
    while(cin>>n>>m>>c){
       test++;
       sum=0,maximum=0;
       blown=false;
       if(n==m&m==c&c==0)break;
       for(int i=1;i<=n;i++)cin>>current[i];
       for(int i=1;i<=m;i++){
           cin>>x;
           state[x]=!state[x];
           if(state[x])sum+=current[x];
           else sum-=current[x];
           if(sum>c)blown=true;
           if(maximum<sum)maximum=sum;
       }
       cout<<"Sequence "<<test<<'\n';
       if(blown)cout<<"Fuse was blown.\n";
       else {
           cout<<"Fuse was not blown.\n";
           cout<<"Maximal power consumption was "<<maximum<<" amperes.\n";
       }
       cout<<'\n';
       for(int i=1;i<=m;i++)state[i]=0;
    }
    return 0;
}
