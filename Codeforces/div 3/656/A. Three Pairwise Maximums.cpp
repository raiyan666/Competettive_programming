#include <bits/stdc++.h>
#define nl              printf("\n")
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[4],a,b,c;
        scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
        sort(arr,arr+3);
        if(max(arr[0],arr[1])!=max(arr[1],arr[2])){
            printf("NO\n");
            continue;
        }
        else {
            a=min(arr[0],arr[1]);
            b=max(arr[1],arr[2]);
            if(b==a)c=arr[0];
            else c=1;
        }
        printf("YES\n");
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
