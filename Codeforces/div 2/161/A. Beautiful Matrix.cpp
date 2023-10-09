#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,n;
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
    {
        scanf("%d",&n);
        if(n==1){
            col=i;
            row=j;
        }
    }
    printf("%d\n",abs(3-row)+abs(3-col));
    return 0;
}
