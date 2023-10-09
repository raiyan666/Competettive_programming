#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl              printf("\n")
using namespace std;
int main()
{
    fast_in_out
   // freopen("FILE_NAME_FOR_INPUT","r",stdin);
   // freopen("FILE_NAME_FOR OUTPUT","w",stdout);

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a=0,b=0;
        scanf("%d",&n);
        for(int i=0;i<n;++i)
        {
            string s;
            cin>>s;
            if(s=="100000000")a++;
            else b++;
        }
        int x=a*b;
        printf("%d\n",x);
    }
    return 0;
}
