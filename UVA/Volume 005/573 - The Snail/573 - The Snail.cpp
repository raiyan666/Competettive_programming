#include <bits/stdc++.h>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    int H,U,D,F;
    double dis_clim;
    while((cin>>H>>U>>D>>F)&&H)
    {
        int day=0;
        double factor=(double)(U)*(double)(F)/100.00,sum=0.00;

        while(sum<=H&&sum>=0){
            dis_clim=(double)(U)-(factor*day);
            sum+=dis_clim;
            sum-=D;
            if(dis_clim<0||sum>H)break;

            cout<<"height climbed: "<<sum<<'\t'<<"distance climbed :"<<dis_clim<<"\tday "<<day<<'\n';
            ++day;

        }
        cout<<"height climbed: "<<sum<<'\t'<<"distance climbed :"<<dis_clim<<"\tday "<<day<<'\n';
        if(sum>H)cout<<"success  on  day  "<<day<<'\n';
        else cout<<"failure  on  day  "<<day<<'\n';
    }
    return 0;
}
