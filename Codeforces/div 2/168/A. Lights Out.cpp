#include <bits/stdc++.h>
using namespace std;
int arr[5][5],inp[5][5];
int main()
{
    for(int j=1;j<4;j++)
        for(int i=1;i<4;i++)scanf("%d",&inp[j][i]);
    for(int j=1;j<4;j++)
        for(int i=1;i<4;i++)
    {
        arr[j][i]+=inp[j][i];
        arr[j][i+1]+=inp[j][i];
        arr[j][i-1]+=inp[j][i];
        arr[j-1][i]+=inp[j][i];
        arr[j+1][i]+=inp[j][i];
    }
    for(int j=1;j<4;j++){
        for(int i=1;i<4;i++)
        {
            printf("%d",(arr[j][i]+1)%2);
        }
         printf("\n");
    }
    return 0;
}
