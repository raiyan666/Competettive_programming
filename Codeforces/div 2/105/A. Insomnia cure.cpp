#include <bits/stdc++.h>
using namespace std;
//
int status[(1000000>>5)];
bool checkbit(int n,int position)
{
    return (bool)(n& (1<<position));
}
int setbit(int n,int position)
{
    n=n|(1<<position);
    return n;
}
int main()
{
    set<int >arr;
    int not_damaged=0;
    for(int i=0;i<4;i++){
        int m;
        scanf("%d",&m);
        arr.insert(m);
    }
       // scanf("%d",&arr[i]);
        int d;
    scanf("%d",&d);
    set<int>::iterator it;
    for(it=arr.begin();it!=arr.end();it++)
    for(int i=*it;i<=d;i+=*it)
    {
        if(!checkbit(status[i>>5],i&31))
        {
        //printf("%d ",i);
        status[i>>5]=setbit(status[i>>5],i&31);
        }
    }
    for(int i=1;i<=d;i++){

        if(!checkbit(status[i>>5],i&31)){
                //printf("%d ",i);
                not_damaged++;
        }
    }

    printf("%d\n",d-not_damaged);
    return 0;
}
