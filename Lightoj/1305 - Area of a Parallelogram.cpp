#include <bits/stdc++.h>
#define ll              long long

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
#define nl              printf("\n")
using namespace std;
int abs(int x)
{
    return x*-1;
}
int main()
{
    fast_in_out
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;
        double Area=0.5;
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        Dx=Cx-Bx+Ax;
        Dy=Ay+Cy-By;
        Area*=(double)(sqrt((Bx-Dx)*(Bx-Dx)+(By-Dy)*(By-Dy)));
        Area*=(double)(sqrt((Cx-Ax)*(Cx-Ax)+(Cy-Cy)*(Cy-Ay)));
        if(Area<0)Area=abs(Area);
        cout<<"Case "<<i<<": "<<Dx<<" "<<Dy<<" "<<Area<<'\n';
    }
    return 0;
}
