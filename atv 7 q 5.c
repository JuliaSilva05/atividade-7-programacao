//atv 7 q 5
#include <stdio.h>
#include <stdlib.h>
int funcao(){
    int A,B,soma_dob;
    scanf("%d",&A);
    scanf("%d",&B);
    A = A*2;
    B = B*2;
    soma_dob = A + B;
    printf("Soma do dobro: %d",soma_dob);
    return;
}
int main(){
    
    funcao();
    return 0;
}