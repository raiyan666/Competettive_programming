#include<bits/stdc++.h>
using namespace std;
// vector<char> bin;
// int next_2(int m){
//     int cnt=0;
//     while(m>0){
//         cnt++;
//         m=m>>1;
//     }
//     return 1<<cnt;
// }
void count_one(int m){
    int cnt=0;
    while(m>0){
        
        if(m&(1<<1)!=0){
            //cout<<"dhukse\n";
            cnt++;
        }
        //cout<<m<<'\t';
        m=m>>1;
    }
    cout<<cnt<<'\n';
    //return cnt;
}
int main(){
    int n;cin>>n;
    //int x=n;
    count_one(n);

    //for(int i = 0; (1 << i) <= x; i++) if(x & (1 << i)) cout << i << " ";
    // if(n &(n-1)==0)puts("1");
    // else{
    //     int x=next_2(n);
    //     x/=2;
    //     //int minim=min((n-(x/2)),(x-n));
        
    //     cout<<n-x+1<<"\n";
    // }
    //cout<<cnt<<"\n";
    return 0;
}