#include <bits/stdc++.h>

#define nl              printf("\n")
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m;
        scanf("%d",&m);
        if(m%4==0)printf("YES");
        else printf("NO");
        nl;
    }
    return 0;
}
