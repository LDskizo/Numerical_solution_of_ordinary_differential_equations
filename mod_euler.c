#include <stdio.h>
#include <math.h>

#define K 0
#define B 0
#define PI 3.141592

#define n 10

double f(double t, double x, double z)
{
    double f;
    f=z;
    return f;
}
double g(double t, double x, double z)
{
    float f;
    f= B*cos(t) - K*z - x*x*x;
    return f;
}
int main()
{
    double x,z,t,h,k,l;
		double a=40,b=45;
    x = 3.0;
		z = 0.0;
		t = a;
		h = 2*PI/300;
    printf("\n  t\t  x\t  z\n");
    while(t<=b)
    {
				printf("%lf\t%lf\t%lf\n",t,x,z);
        k=h*(f(t,x,z)+f(t+h,x + h*f(t,x,z),z + h*g(t,x,z)))/2;
				l=h*(g(t,x,z)+g(t+h,x + h*f(t,x,z),z + h*g(t,x,z)))/2;
        x=x+k;
				z=z+l;
        t=t+h;
    }
		printf("%lf\t%lf\t%lf\n",t,x,z);
}
