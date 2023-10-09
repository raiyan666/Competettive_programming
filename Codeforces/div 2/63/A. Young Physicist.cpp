#include <bits/stdc++.h>
using namespace std;
int arr[3];
int main()
{

    int n;
    scanf("%d",&n);
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        arr[0]+=a;
        arr[1]+=b;
        arr[2]+=c;
    }
    for(int i=0;i<3;i++){
        if(arr[i]!=0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
