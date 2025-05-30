#include <bits/stdc++.h>
using namespace std;
int a[102];
int main()
{
    int n;
    scanf("%d",&n);
    //int a[n+2];
    int maxim=0,minim=100,max_pos,min_pos;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]>maxim){
            maxim=a[i];
            max_pos=i;
        }
        if(a[i]<=minim){
            minim=a[i];
            min_pos=i;
        }
    }
    //printf("maximum=%d maximum_pos=%d ",maxim,max_pos);
    //printf("miniimum=%d minimum_pos=%d ",minim,min_pos);

    int ans=(max_pos-1)+(n-min_pos);
    if((max_pos-min_pos)>=0)ans--;
    printf("%d\n",ans);
    return 0;
}
