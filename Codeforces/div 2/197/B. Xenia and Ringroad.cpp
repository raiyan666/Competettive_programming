#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    int n,m;
    long long time=0;
    scanf("%d%d",&n,&m);
    arr[0]=1;
    for(int i=1;i<=m;i++)scanf("%d",&arr[i]);
    for(int i=1;i<=m;i++){
        if(arr[i]<arr[i-1]){
            time+=arr[i]-arr[i-1]+n;
        }
        else{
            time+=arr[i]-arr[i-1];
        }
        //printf("%d\n",time);
    }
    cout<<time<<'\n';
    return 0;
}
