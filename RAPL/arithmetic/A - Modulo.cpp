#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    for(int i=0;i<10;i++)
    {
        int cnt=0;
        vector<int>rem;
        for(int j=0;j<10;j++)
        {
            int a;
            scanf("%d",&a);
            a=a%42;
            vector<int>::iterator it;
            it=find(rem.begin(),rem.end(),a);
            if(it==rem.end()){
                rem.push_back(a);
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
