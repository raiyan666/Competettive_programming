#include <bits/stdc++.h>
#define vi vector <int>
using namespace std;

#define mx  100000000
int status[mx>>6];
vi Prime;

bool checkbit(int n,int position)
{
    return(bool)(n & (1<<position));
}
int setbit(int n,int position)
{
    n=n|(1<<position);
    return n;
}

int main()
{
    int i,j, limit=(int)(sqrt(mx))+2;
    //status[0]=setbit(status[0],1&31);
    Prime.push_back(2);
    //for(i=4;i<mx;i+=2) setbit(status[i>>5],i&31);

    for(i=3;i<=mx;i+=2){
        if(!checkbit(status[i>>6],(i>>1)&31)){
            Prime.push_back(i);
            if(i<=limit)
            for(j=i*i;j<=mx;j+=(i<<1)){
                status[j>>6]=setbit(status[j>>6],(j>>1)&31);
            }
        }
    }
    for(int k=0;k<=(int)Prime.size();k+=100)
    {
        printf("%d\n",Prime[k]);
    }
    return 0;
}
