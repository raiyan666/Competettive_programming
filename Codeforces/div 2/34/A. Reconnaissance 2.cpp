#include <bits/stdc++.h>
using namespace std;
int arr[1000];
int main()
{
    int n,a,b;
    scanf("%d",&n);
    //int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    int minimum=abs(arr[0]-arr[n-1]);
    b=1,a=n;
    //if(minimum>abs(arr[0]-arr[n-1]))
    for(int i=0;i<n-1;i++)
    {
        if(abs(arr[i]-arr[i+1]) < minimum)
        {
            minimum=abs(arr[i]-arr[i+1]);
            a=i+1;
            b=i+2;
        }
    }
    printf("%d %d\n",a,b);
    return 0;
}
