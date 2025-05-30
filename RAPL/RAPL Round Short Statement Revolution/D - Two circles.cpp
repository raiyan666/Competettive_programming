#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1,y1,x2,y2,r1,r2;
    scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&r1,&x2,&y2,&r2);

        double a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        if(a>(r1+r2)||a<abs(r1-r2))
        {
            printf("0\n");
            return 0;
        }
        else if(a==0 && r1==r2)
        {
            printf("-1\n");
            return 0;
        }
        else if(a==(r1+r2)){
            printf("1\n");
            return 0;
        }
        else {
            printf("2\n");
            return 0;
        }

}
