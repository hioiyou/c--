#include <stdio.h>
#include <math.h>
int main(void)
{
    int a;
    double k,price;
    scanf("%d,%lf",&a,&k);
    if(a==0||a==1||a==2||a==3||a==4){
        if(a==0){
            price=(10+ceil(k-1)*3);
        }else if(a==1){
            price=(10+ceil(k-1)*4);
        }else if(a==2){
            price=(15+ceil(k-1)*5);
        }else if(a==3){
            price=(15+ceil(k-1)*6.5);
        }else if(a==4){
            price=(15+ceil(k-1)*10)*1.0;
        }
        printf("Price:%.2f\n",price);
    }
    else{
    	printf("Error in Area\n");
    }
    return 0;
}
