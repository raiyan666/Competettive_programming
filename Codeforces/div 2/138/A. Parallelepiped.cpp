#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    long long a=x*y;
    a/=z;
    a=sqrt(a);
    long long b=z*y;
    b/=x;
    b=sqrt(b);
    long long c=z*x;
    c/=y;
    c=sqrt(c);
    //z=(a/z);
    cout<<(a+b+c)*4<<'\n';
    return 0;
}
