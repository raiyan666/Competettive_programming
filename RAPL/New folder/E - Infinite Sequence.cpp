#include <iostream>
using namespace std;
#define i64 long long int
int main()
{
    i64 a,b,c,x,y,z;
    cin>>a>>b>>c;
    bool state=false;
    if(a==b|| (c==0&&a==b))
    {
        state =true;
    }
    else if(c>0 && b>a)
    {
        x=b%c;
        y=a%c;
        z=(x-y+c)%c;
        if(z==0){
            state =true;
        }
        else{
            state=false;
        }
    }
    else if(c<0&& b<a)
    {
        a*=-1;
        b*=-1;
        c*=-1;
        x=b%c;
        y=a%c;
        z=(x-y+c)%c;
        if(z==0){
            state =true;
        }
        else{
            state=false;
        }
    }

    cout<<(state? "YES" : "NO")<<'\n';
    return 0;
}
