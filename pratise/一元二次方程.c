#include <stdio.h>
#include <stdio.h>
int main(void)
{
	double a,b,c,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(b*b-4*a*c>0){
		x1=((-b+sqrt(b*b-4*a*c))/(2*a));
		x2=((-b-sqrt(b*b-4*a*c))/(2*a));
		printf("x1=%lf,x2=%lf",x1,x2);
	}
	else
	printf("b*b-4*a*c<0,it'worong");
	return 0;
}
