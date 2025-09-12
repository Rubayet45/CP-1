#include<stdio.h>
int main(){
int N;
scanf("%d",&N);
int onehun = N/100;
int fifty =  N%100/50;
int twenty =  N%100%50/20;
int ten = N%100%50%20/10;
int five =  N%100%50%20%10/5;
int two= N%100%50%20%10%5/2;
int one= N%100%50%20%10%5%2/1;
 printf("%d\n",N);
 printf("%d nota(s) de R$ 100,00\n",onehun);
 printf("%d nota(s) de R$ 50,00\n",fifty);
 printf("%d nota(s) de R$ 20,00\n",twenty);
 printf("%d nota(s) de R$ 10,00\n",ten);
 printf("%d nota(s) de R$ 5,00\n",five);
 printf("%d nota(s) de R$ 2,00\n",two);
 printf("%d nota(s) de R$ 1,00\n",one);
return 0;
}


