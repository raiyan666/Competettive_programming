#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q,L,R,m,x;
    //vector <int> arr(1000006),pre(1000006);
    int arr[1000006],pre[1000006];
    scanf("%d",&n);
    for(int i=0;i<10006;i++){
        arr[i]=0;
        pre[i]=0;
    }
    scanf("%d",&q);
    for(int i=1;i<=q;i++){
        scanf("%d%d",&L,&R);
        arr[L]+=1;
        arr[R+1]-=1;
        pre[R+1]-=(R-L+1);
    }
    for(int i=1;i<=n;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=1;i<=n;i++){
        pre[i]+=pre[i-1]+arr[i];
        
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        cin>>x;
        cout<<pre[x]<<"\n";
    }
    return 0;
}