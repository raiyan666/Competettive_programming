#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>c;
    int n,maximum=0,minimum=1000000000;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        c.push_back(x);
        if(x>maximum)maximum=x;
        if(x<minimum)minimum=x;
    }
    int maxi=0,mini=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]==maximum)maxi++;
        if(c[i]==minimum&&maximum!=minimum)mini++;
    }
    printf("%d\n",n-maxi-mini);
    return 0;
}
