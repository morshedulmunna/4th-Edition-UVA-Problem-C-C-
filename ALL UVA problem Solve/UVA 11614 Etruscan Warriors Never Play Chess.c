#include<stdio.h>
#include<math.h>
int main()
{
    double s,s1,del;
    long long int N,T;

    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lf",&s);

        del= sqrt(1+(8*s));
        s1=(-1 +del)/2;

        N=(long long)(s1);

        printf("%lld\n",N);
    }
    return 0;
}



/*

n*(n+1)/2 = s
n^2+n=2*s
n^2+n+(-2*s)=0

Using quadratic equation ax^2+bx+c=0

del = sqrt(b*b-4*a*c) = sqrt(1-4*1*(-2s)) = sqrt(1+8s)
we know x = (-b(+-) del)/2a

Here i use only + value because del is always positive

so n = (-1+sqrt(1+8s))/2

Input as double s
then print n (where n is convert from double to

*/
