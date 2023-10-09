#include <bits/stdc++.h>
using namespace std;
int arr[3002];
int main()
{
    freopen("10038_Jolly_Jumpers_INPUT.txt","r",stdin);
   //freopen(“10038_Jolly_Jumpers_OUTPUT”,”w”,stdout);
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        bool value=true;
        vector<int>ans;
        for(int i=0;i<t;++i)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=1;i<t;++i)
        {
            ans.push_back(abs(arr[i]-arr[i-1]));
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<t-1;++i)
        {
            if(ans[i]!=i+1)value=false;
        }

    if(value)printf("Jolly\n");
    else printf("Not jolly\n");
    }
    return 0;
}
