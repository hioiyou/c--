#include <stdio.h>
#define pi 3.1415926//宏定义,不变定量 
int main(void)
{
	double r;
	scanf("%lf",&r);
	printf("%lf\n",4*pi*r*r);
	printf("%lf",4*pi/3*r*r*r);
	
	return 0;
}
