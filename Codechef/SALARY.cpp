#include <iostream>
#include <algorithm>

using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int salary[10000];
        int n,sum=0;
        cin>>n;
        FOR(i,0,n) {
            cin>>salary[i];
            sum+=salary[i];
        }
        int *MIN;
        MIN=min_element(salary,salary+n);
        sum=sum-n*(*MIN);
        cout<<sum<<'\n';
    }
    return 0;
}
