#include <bits/stdc++.h>
using namespace std;
int arr[102];
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m;
        scanf("%d",&m);
        sum+=m;
    }
    int  x=0;
    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1)!=1){x++;
    //printf("%d\n",sum+i);
        }
    }

    printf("%d\n",x);
    return 0;
}
