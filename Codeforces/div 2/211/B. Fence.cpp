#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>height;
    int n,k,t;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        height.push_back(t);
    }
    int m,indices=1;
     for(int i=0;i<k;i++)m+=height[i];
     int sum=m;
    for(int j=1;j<=n-k;j++)
    {
        sum=sum-height[j-1]+height[j+k-1];
        if(sum<m){
            m=sum;
            indices=j+1;
        }
    printf("%d\n",indices);
    return 0;
}
