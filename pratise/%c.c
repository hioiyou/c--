#include <stdio.h>
int main(void)
{
	char a,b;
	int c;
	scanf("%c%c%d",&a,&b,&c);
	printf("%-2c,%-2c,%d\n",a,b,c);//-表示左对齐，即字符后输出一空格 
	return 0;
}
