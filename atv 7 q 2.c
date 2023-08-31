//atv 7 q 2
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 10;
    float b = 3.2;
    char c = 'c';
    int *pa = &a;
    float *pb = &b;
    char *pc = &c;
    printf("Valores iniciais:\n a = %d\n b = %f\n c = %c \n\n",a,b,c);
    *pa = 40;
    *pb = 5.3;
    *pc = 'T';
    printf("Valores finais:\n a=%d\n b=%f\n c=%c \n\n",a,b,c);
    
    return 0;
}