#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a<b)printf("<\n");
        else if(a>b)printf(">\n");
        else printf("=\n");
    }
    return 0;
}
