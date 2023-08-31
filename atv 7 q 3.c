//atv 7 q 3
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 10;
    int b = 4;

    int *pa = &a;
    int *pb = &b;

    printf("Variaveis:\n a = %d\n b = %f\n \n",a,b);
    printf("Enderecos:\n a=%p\n b=%p\n \n",&a,&b);
    
    return 0;
}