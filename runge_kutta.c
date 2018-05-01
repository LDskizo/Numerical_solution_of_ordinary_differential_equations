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
		double k1,k2,k3,k4;
		double l1,l2,l3,l4;
		double a=20,b=40;
    x = 3.0;
		z = 0.0;
		t = a;
		h = 2*PI/50;
    printf("\n  t\t  x\t  z\n");
    while(t<=b)
    {
				printf("%lf\t%lf\t%lf\n",t,x,z);
				k1 = f(t,x,z);
				l1 = g(t,x,z);
				k2 = f(t+h/2,x + h*k1/2,z + h*l1/2);
				l2 = g(t+h/2,x + h*k1/2,z + h*l1/2);
				k3 = f(t+h/2,x + h*k2/2,z + h*l2/2);
				l3 = g(t+h/2,x + h*k2/2,z + h*l2/2);
				k4 = f(t+h,x + h*k3,z + h*l3);
				l4 = g(t+h,x + h*k3,z + h*l3);
        k=h*(k1 + 2*k2 + 2*k3 + k4)/6;
				l=h*(l1 + 2*l2 + 2*l3 + l4)/6;
        x=x+k;
				z=z+l;
        t=t+h;
    }
		printf("%lf\t%lf\t%lf\n",t,x,z);
}
