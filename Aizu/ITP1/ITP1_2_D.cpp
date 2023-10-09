#include <iostream>
using namespace std;
int abso(int x)
{
    return (-1*x);
}
int main()
{
    int W,H,x,y,r;
    cin>>W >> H >> x >> y >> r;
    /*if(x<0)x=abso(x);
    if(y<0)y=abso(y);
    if(W<0)W=abso(W);
    if(H<0)H=abso(H);
        */
    if(x+r<=W && x-r>=0 &&y+r<=H &&y-r>=0)cout<<"Yes\n";
    else cout<<"No\n";
}
