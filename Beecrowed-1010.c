#include<stdio.h>
int main(){
int p1;
int unit1;
float per_unit1;
scanf("%d %d %f",&p1,&unit1,&per_unit1);
int p2;
int unit2;
float per_unit2;
scanf("%d %d %f",&p2,&unit2,&per_unit2);
float total= unit1 * per_unit1 + unit2 * per_unit2;
printf("VALOR A PAGAR: R$ %.2f\n",total);
return 0;
}

