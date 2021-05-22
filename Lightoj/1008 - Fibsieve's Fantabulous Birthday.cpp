#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
#define ll              long long
using namespace std;
int main()
{
    //freopen ("myfile.txt","w",stdout);
    int t;
    ll input;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        ll row,col;
        scanf("%ld",&input);
        ll root=sqrt(input);
        if(input==(root*root)){
            if(root%2){
                row=root;
                col=1;
            }
            else{
                col=root;
                row=1;
            }
        }
        else{
            if(root%2){
               if(input<=(root*root)+(root+1)){
                    row=root+1;
                    col=input-(root*root);
                }
                else{
                    col=root+1;
                    row=((root+1)*(root+1))-input+1;
                }
            }
            else{
                if(input<=(root*root)+(root+1)){
                    col=root+1;
                    row=input-(root*root);
                }
                else{
                    row=root+1;
                    col=((root+1)*(root+1))-input+1;
                }
            }
        }
        printf("Case %d: %ld %ld\n",i,col,row);
    }
    return 0;
}
