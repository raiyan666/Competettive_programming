#include <iostream>

using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[51];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count_num=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0 && arr[i]>=arr[k-1])
        {
            count_num++;
        }
    }
    cout<<count_num<<"\n";
    return 0;
}
