#include<stdio.h>
int main (){
float x;
scanf("%f",&x);
if(0<x&&x<=2000){
   printf("Isento\n");
}
else if(2000<x&&x<=3000){
    printf("R$ %.2f\n",((x-2000)*0.08));
}
else if(3000<x&&x<=4500){
    printf("R$ %.2f\n",1000*0.08+((x-3000)*0.18));
}
else{
    printf("R$ %.2f\n",1000*0.08+1500*0.18+((x-4500)*0.28));
}
return 0;
}

