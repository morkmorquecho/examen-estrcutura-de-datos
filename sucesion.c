#include<stdio.h>

int main(){
int valor,a=5,b,c;

printf("ingresa caul valor de la secuencia quieres concer: ");
scanf("%d", &valor);

for(int i=1; i<=valor; i = i + 1 ){
a=a*3;
b=a/3;
}
printf("%d",b);
return 0;
}
