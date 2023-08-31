//atv 7 q 1
#include <stdio.h>
#include <stdlib.h>

int main(){
    char c = 'a';
    char *pc = &c;
    
    printf("a)Endereco c: %p\n  Valor c: %c\n",&c,c);
    printf("b)Valor pc: %c\n  Valor guardado no endereco apontado por pc: %p\n",*pc,pc);
    printf("c)Endereco de pc: %p\n",&pc);
    
    return 0;
}