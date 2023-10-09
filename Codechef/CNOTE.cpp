#include<iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int X,Y,K,N;
        cin>>X>>Y>>K>>N;
        bool found=false;
        int dif=X-Y;
        while(N--)
        {
            int P,C;
            cin>>P>>C;
            if(P>=dif && K>=C)
            {
                found=true;
            }
        }
        cout<<(found? "LuckyChef" : "UnluckyChef")<<'\n';
    }
    return 0;
}
