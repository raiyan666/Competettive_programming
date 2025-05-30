#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,maximum,minimum,a;
    scanf("%d",&n);
    scanf("%d",&a);
    maximum=a;
    minimum=a;
    int sol=0;
    n--;
    while(n--)
    {
        scanf("%d",&a);
        if(a>maximum)
        {
            maximum=a;
            sol++;
        }
        else if(a<minimum){
            minimum=a;
            sol++;
        }
    }
    printf("%d\n",sol);
    return 0;
}
