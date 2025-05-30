
#include<bits/stdc++.h>
using namespace std;
long long int sum1[100055], sum2 [100055], in1[100055], in2[100055], rem = 0;
int main()
{

    long long int n, k;
    cin >> n >> k;
    for (long long int i = 1; i <= n; i++)
        cin >> in1[i];
    for (long long int i = 1; i <= n; i++)
        cin >> in2[i];

    for (long long int i = 1; i <= n; i++)
    {
        sum1[i] = sum1[i-1] + in1[i]; //accumulate all numbers iteratively
        sum2[i] = sum2[i - 1] + in1[i] * in2[i];
    }
    long long int temp = 0;
    for (long long int i = 1; i <= n-k+1; i++)
    {
        temp= sum2[i-1] + (sum1[i + k-1] - sum1[i-1]) + (sum2[n] - sum2[i + k-1]);
        rem=max(rem,temp);
        //cout<<i<<" "<<temp<<'\n';
    }
    cout <<  rem << endl;
    return 0;
}
