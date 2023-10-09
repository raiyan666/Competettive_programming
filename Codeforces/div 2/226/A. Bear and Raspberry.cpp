/* এ কেমন দিন কাটছে
মেঘের খেলা দেখিনি
ঘরে বসে  ঘরবন্ধি
সময় অনিময়ে কাপছে
অতীতের গল্প
মনে আছে অল্প,

আমার সামনে কি আসছে?
কেও কি আমায় একটি জানাবে?
আধার কালো এক আগামি
নাকি আলোকিত আছি?
অতীতের গল্প
মনে আছে অল্প
যদি......
ভোর দেখি
তুমি আর আমি ও ভোর
তার নেই কোন মায়া
নেই সুখের ছায়া
চার দেওয়ালের মাঝে আমি
সেই ভোরের অপেক্ষায়
আশা আসে যায়
মনে থাকবে এই সময়
যদি.......
ভোর দেখি
তুমি আর আমি ও ভোর
যদি......
ভোর দেখি
তুমি আর আমি ও ভোর*/
#include <bits/stdc++.h>

#define fast_in_out     ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main()
{
    int arr[102];
    fast_in_out
    //freopen ("myfile.txt","w",stdout);
    //int t;cin>>t;
    int n,c,maxim=0;
    cin>>n>>c;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n-1;i++)arr[i]-=arr[i+1];
    for(int i=0;i<n-1;i++)if(arr[i]>maxim)maxim=arr[i];
    maxim-=c;
    if(maxim<0)maxim=0;
    cout<<maxim<<'\n';
    return 0;
}
