#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<15;i++)
    if(arr[i]==a&&arr[i+1]==b){
        printf("YES\n");
        return 0;
    }
    printf("NO\n");
    return 0;
}
