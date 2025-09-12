#include<stdio.h>
int main ()
{
    int t=5,count=0;
    int a;
    while(t>0)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            count++;
        }
        t--;
    }
    printf("%d valores pares\n",count);
    return 0;
}

