#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int num1,num2,query;
        int largest=std::max(num1,num2);
        cin>>num1>>num2>>query;
        while(query--)
        {
            int first,second;
            int count=0;
            cin>>first>>second;

            if(largest>second)
            {
                cout<<count<<"\n";
                continue;
            }

            for(int x=first;x<=second;x++)
            {
                int first_mod=x%num1,second_mod=x%num2;
                if(first_mod%num2!=second_mod%num1)
                {
                    count++;
                }
            }
            cout<<count<<'\n';
        }
    }
    return 0;
}
