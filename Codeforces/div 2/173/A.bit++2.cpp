#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;
#define FOR(i,a,n) for(register int i=(a);i<(int)(n);++i)
#define all(n) (n).begin(),(n).end()
int main()
{

    int n;
    cin>>n;
    vector<string>v(n);
    FOR(i,0,n)cin>>v[i];
    cout<<count(all(v),"++X")+count(all(v),"X++")-count(all(v),"X--")-count(all(v),"--X")<<"\n";
    return 0;
}
