#include <bits/stdc++.h>

using namespace std;
int main()
{
    int con[3][3],color[6][3]={{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,0,1},{2,1,0}};
    vector<string>combo={"BCG","BGC","CBG","CGB","GBC","GCB"};
    while(cin>>con[0][0]>>con[0][1]>>con[0][2]>>con[1][0]>>con[1][1]>>con[1][2]>>con[2][0]>>con[2][1]>>con[2][2])
    {
        int sum[6],summation=0,maxim=0;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)summation+=con[i][j];
        for(int i=0;i<6;i++){
            //cout<<combo[i]<<'\t';
            sum[i]=con[0][color[i][0]]+con[1][color[i][1]]+con[2][color[i][2]];
            //cout<<sum[i]<<'\n';
            maxim=max(maxim,sum[i]);
            //cout<<"maxim : "<<maxim<<'\n';
        }
        for(int i=0;i<6;i++){

            if(sum[i]==maxim){
                //sort(combo[i][0],combo[i][3]);
                //if(combo[i]=="GCB")cout<<"BCG ";
                //else if(combo[i]=="CGB")cout<<"BGC ";
                //else if(combo[i]=="GBC")cout<<"CBG ";
                 cout<<combo[i]<<' ';
                break;
            }
        }
        cout<<summation-maxim<<'\n';
    }

    return 0;
}
