#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector <int>ans;
        int remain=0,n,summands=0;
        cin>>n;
        if(n>=10000)
        {
            remain=n%10000;
            summands++;
            int temp=n-remain;
            ans.push_back(temp);
            n=remain;
        }
        if(n>=1000)
        {
            remain=n%1000;
            summands++;
                int temp=n-remain;
                ans.push_back(temp);
            n=remain;
        }
        if(n>=100)
        {
            remain=n%100;
            summands++;
            int temp=n-remain;
            ans.push_back(temp);
            n=remain;
        }
        if(n>=10)
        {
            remain=n%10;
            summands++;
            int temp=n-remain;
            ans.push_back(temp);
            n=remain;
        }
        if(n<10 &&n>0)
        {
            ans.push_back(n);
            summands++;
        }
        cout<<summands<<'\n';
        for(auto it=ans.begin();it!=ans.end();it++)
        {
            cout<<*it;
            if(ans.empty())
            {
                cout<<'\n';
                break;
            }
            cout<<" ";
        }
        ans.clear();
        cout<<'\n';
    }
    return 0;
}
