//atv 7 q 4
#include <stdio.h>
#include <stdlib.h>
int funcao(){
    int A,B,vA,vB;
    scanf("%d",&A);
    printf("A=%d\n",A);
    scanf("%d",&B);
    printf("B=%d\n\n",B);
    vA = A;
    vB = B;
    A = vB;
    B = vA;
    printf("A=%d \nB=%d\n",A,B);
    return;
}

int main(){
    
    funcao();
    
    return 0;
}