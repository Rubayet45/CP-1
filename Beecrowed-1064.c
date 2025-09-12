#include<stdio.h>
int main ()
{
    int t=6,count=0;
    float a,sum=0;
    while(t>0)
    {
        scanf("%f",&a);
        if(a>0)
        {
            count++;
            sum=sum+a;
        }
        t--;
    }
    printf("%d valores positivos\n%.1f\n",count,sum/count);
    return 0;
}

