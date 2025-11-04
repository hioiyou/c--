#include <stdio.h>

int main(void)
{
	int a=10;
	int *p=&a;
	printf("a的值：%d\n",a);
	printf("指针p指向的值：%d\n",*p);
	return 0;
}
