#include <bits/stdc++.h>
using namespace std;
int arr[105];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<m;i++)
        if(arr[i]<=0)
            sum+=arr[i];
    printf("%d\n",sum*-1);
    return 0;
}
