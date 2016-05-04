#include <stdio.h>
#include <stdlib.h>
#define tam 10  // constante
int main()
{
    int a[tam],b[tam],i,cont=10,a_aux[10];
    int c[9],somaab=0,resto;
    printf("OBS: DE ESPACO ENTRE OS NUMEROS ");
    printf("\nINFORME SEU CPF: ");
    for(i=1; i<=9; i++) scanf("%d",&a[i]); // leitura do cpf
    for(i=1; i<=9; i++) b[i]=cont--;      // o valor pre definido
    for(i=1; i<=9; i++) c[i]=a[i]*b[i]; // multiplicação do vetor
    for(i=1; i<=9; i++) somaab=somaab+c[i]; // soma dos valores multiplivados
    resto=somaab%11; // resto da divisão
    int numero1,numero2;
    if(resto==0 || resto==1){ // verificando o resto da divisão
     numero1=0;
    }
    else if(resto>=2 && resto<=10){
         numero1= 11-resto;
    }
    printf("\n O primeiro verificador e: %d",numero1);
    for(i=1; i<=9; i++) a_aux[i]=a[i];
    a_aux[tam]=numero1; // adicionando na matriz a
    cont=11;
    for(i=1; i<=tam; i++) b[i]=cont--;
    for(i=1; i<=tam; i++) c[i]=a_aux[i]*b[i];
    somaab=0;
    for(i=1; i<=tam; i++) somaab=somaab+c[i];
    resto=somaab%11;
    //-------------------------------------------------------
    if(resto==0 || resto==1){
     numero2=0;
    }
    else if(resto>=2 && resto<=10){
         numero2= 11-resto;
    }
    printf("\n O segundo verificador e: %d",numero2);
    printf("\n O seu cpf e: ");
    for(i=1; i<=9; i++){
       printf("%d",a[i]);
       if(i%3==0 && i!=9){
         printf(".");
       }
    }
    printf(" - %d%d",numero1,numero2);
    return 0;
}
