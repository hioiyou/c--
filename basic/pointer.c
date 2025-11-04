#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;  // 指针p指向变量a
    printf("a的值：%d\n", a);
    printf("指针p指向的值：%d\n", *p);
    return 0;
}
