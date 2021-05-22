#include <iostream>
using namespace std;
int divisible(int x){
    int ans=x/3;
    ans*=2;
    if(x%3==2)ans++;
    return ans;
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {

        int A,B;
        scanf("%d%d",&A,&B);
        int cnt1=divisible(B);
        int cnt2=divisible(A-1);
        printf("Case %d: %d\n",i,cnt1-cnt2);
    }
    return 0;
}
