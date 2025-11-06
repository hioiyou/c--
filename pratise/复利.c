#include <stdio.h>
#include <math.h>
int main(void)
{
	const double rate=0.0225;
	double capital;
	int n;
	scanf("%lf%d",&capital,&n);
	printf("%.2lf",capital*pow(1+rate,n));//pow函数是指数运算，逗号左为底数，右为指数 
	return 0;
}
