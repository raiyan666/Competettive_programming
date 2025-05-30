#include <bits/stdc++.h>
using namespace std;
int arr[100005],dif[100005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int maxi=1;
    dif[0]=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<=arr[i])
            dif[i]=dif[i-1]+1;
        else{
            dif[i]=1;
        }
        maxi=max(maxi,dif[i]);
    }
    printf("%d\n",maxi);
    return 0;
}
