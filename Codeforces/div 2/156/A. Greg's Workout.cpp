#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    map<string,int>wr;
    wr["biceps"]=0;
    wr["Back"]=0;
    wr["chest"]=0;
    for(int i=1;i<=n;i++){
        int s;
        scanf("%d",&s);
        if(i%3==1)wr["chest"]+=s;
        else if(i%3==2)wr["biceps"]+=s;
        else wr["back"]+=s;
    }
    int sol=max(wr["chest"],wr["back"]);
    sol=max(sol,wr["biceps"]);
    if(sol==wr["back"])printf("back\n");
    else if(sol==wr["chest"])printf("chest\n");
    else printf("biceps\n");
    return 0;
}
