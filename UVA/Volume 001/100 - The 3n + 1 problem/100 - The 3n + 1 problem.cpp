#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    while((scanf("%d%d",&i,&j))==2)
    {
        int mx=0;
        int x= (i>j)?i:j;
        int y= (i<j)?i:j;
        for(int loop=y;loop<=x;loop++)
        {
           int countNum=1,n=loop;
            {
                while(n!=1)
                {
                    countNum++;
                    if(n%2==0) n/=2;
                    else n=(3*n)+1;
                }
                if(countNum>=mx) mx=countNum;
            }
        }
        printf("%d %d %d\n",i,j,mx);
    }
    return 0;
}
