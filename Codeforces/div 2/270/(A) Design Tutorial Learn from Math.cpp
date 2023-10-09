#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    if(n%2){
        printf("9 %d\n",n-9);
    }
    else{
        int m=n/2;
        if(m%2){
            printf("%d %d\n",m-1,m+1);
        }
        else printf("%d %d\n",m,m);
    }
    return 0;
}
