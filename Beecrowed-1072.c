#include<stdio.h>
int main (){
int t,n,in=0,out=0;
scanf("%d",&t);
while(t!=0){
    scanf("%d",&n);
    if(10<=n&&n<=20){
        in++;
    }
    else{
        out++;
    }
    t--;

}
printf("%d in\n%d out\n",in,out);
return 0;
}


