#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int m,a,b,c;
        if(x%3==0){
            m=x/3;
            a=m+1;
            b=m;
            c=m-1;
        }
        else{
            m= x / 3;
            b= m + 1;
            a= m + 2;
            c=  x -(2*m)-3;
            if(c==0){
                c=1;
                b=m;
                a=x-m-1;         
            }
            
        }
        cout<<b<<" "<<a<<" "<<c<<endl;
    }
    return 0;
}