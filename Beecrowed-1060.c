#include<stdio.h>
int main ()
{
    int t=6,count=0;
    float a;
    while(t>0)
    {
        scanf("%f",&a);
        if(a>0)
        {
            count++;
        }
        t--;
    }
    printf("%d valores positivos\n",count);
    return 0;
}

