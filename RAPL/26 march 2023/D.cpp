#include<bits/stdc++.h>
using namespace std;
vector<int>Prime;
#define mx 10000003

bitset <mx> mark;

int main(){
    
    int i,j,limit=sqrt(mx)+1;
    mark[1]=true;
    for(i=4;i<=mx;i+=2) mark[i]=true;
    //Prime.push_back(1);
    Prime.push_back(2);

    for(i=3;i<=mx;i+=2)
        if(!mark[i])
    {
        Prime.push_back(i);
        if(i<=limit)
        {
            for(j=i*i;j<=mx;j+=(2*i))
            {
                mark[j]=true;
            }
        }
    }
    
    int t;
    cin>>t;
    //scanf("%d",&t);
    for(j=1;j<=t;j++){
        int n;
        cin>>n;
        //scanf("%d",&n);
        int ans=0;
        for(i=0;Prime[i]<=(n/2);i++){
            int p=n-Prime[i];
            int q=Prime[i];
            if(!mark[p] && !mark[q])ans++;
        }
        printf("Case %d: %d\n",j,ans);
    }
    return 0;
}