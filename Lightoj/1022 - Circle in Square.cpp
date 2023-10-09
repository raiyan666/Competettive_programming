#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    double pi=2*acos(0.0);
    cout<<pi<<'\n';
    for(int i=1;i<=t;i++)
    {
        double rad,area;
        scanf("%lf",&rad);
        cout<<rad<<'\n';
        area=rad*rad;
        double dif=(4.00-pi);
        area*=dif;
        cout<<area<<'\n';
        printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}

