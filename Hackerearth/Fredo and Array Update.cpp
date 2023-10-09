#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    int n;
    scanf("%d",&n);

    int sum=0;
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int ans=sum/n;
    printf("%d\n",++ans);
    return 0;
}
