#include <iostream>
int max(int x,int y)
{
    if(x>y)return x;
    else return y;
}
int min(int x,int y)
{
    if(x<y)return x;
    else return y;
}
using namespace std;
int main()
{
    int a,b,ans=0;
    cin>>a>>b;
    int maxim=max(a,b);
    int minim=min(a,b);
    //ans+=minim;
    maxim-=minim;
    cout<<minim<<' '<<(maxim/2)<<'\n';
}
