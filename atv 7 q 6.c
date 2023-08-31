#include <stdio.h>
#include <stdlib.h>
void funcao(){
    int A,B;
    
    scanf("%d",&A);
    printf("A=%d\n",A);
    scanf("%d",&B);
    printf("B=%d\n\n",B);
    A = A + B;
    printf("A=%d \nB=%d\n",A,B);
}
int main(){
    funcao();
    
    return 0;
}