#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        double d,k,little,big,r1,r2,PI=acos(-1);
        scanf("%lf%lf",&d,&k);

        little = d/(k-1);
        big = d + little;

        r1=big/(2*PI);
        r2=little/(2*PI);

        printf("%.6lf\n",(PI*r1*r1)-(PI*r2*r2));
    }
    return 0;
}
