#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        set<int> r,c;
        int n,m;
        scanf("%d%d",&n,&m);
        int mat[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%d",&mat[i][j]);
                if(mat[i][j]==1)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        int mn=min(n-r.size(),m-c.size());
        if(mn%2==0)printf("Vivek\n");
        else printf("Ashish\n");
    }
    return 0;
}
