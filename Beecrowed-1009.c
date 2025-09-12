#include<stdio.h>
#include<string.h>
int main(){
char name[100];
scanf("%s",name);
double fixed_salary;
scanf("%lf",&fixed_salary);
double sales;
scanf("%lf",&sales);
double final_salary = fixed_salary + sales * 0.15 ;
printf("TOTAL = R$ %.2lf\n",final_salary);
return 0 ;
}

