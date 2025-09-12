#include<stdio.h>
int main(){
int X,Y;
float Z;
scanf("%d %d",&X,&Y);
switch(X){
case 1:
    {
Z=4.00;
printf("Total: R$ %.2f\n",Z*Y);
break;
}
case 2:
    {
Z=4.50;
printf("Total: R$ %.2f\n",Z*Y);
break;
}
case 3:
    {
Z=5.00;
printf("Total: R$ %.2f\n",Z*Y);
break;
}
case 4:
    {
Z=2.00;
printf("Total: R$ %.2f\n",Z*Y);
break;
}
case 5:
    {
Z=1.50;
printf("Total: R$ %.2f\n",Z*Y);
break;
}
default:
    {
printf("Invalid code\n");
}}
return 0;
}
