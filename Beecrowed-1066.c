#include<stdio.h>
int main ()
{
    int t=5,count=0,countodd=0,countp=0,countn=0;
    int a;
    while(t>0)
    {
        scanf("%d",&a);

        if(a%2==0)
        {
            count++;
        }
        else
        {
            countodd++;
        }
 if(a!=0){
        if(a<0)
        {
            countn++;
        }
        else
        {


            countp++;
        }}
        t--;

    }
    printf("%d valor(es) par(es)\n",count);
    printf("%d valor(es) impar(es)\n",countodd);
    printf("%d valor(es) positivo(s)\n",countp);
    printf("%d valor(es) negativo(s)\n",countn);
    return 0;
}

