#include<stdio.h>
int main ()
{
    float x;
    scanf("%f",&x);
    if(x>=0 &&x<=400)
    {
        int y=15 ;
        float incre =x*.15;
        float new_salary =x+incre;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",incre);
        printf("Em percentual: %d %%\n",y);
    }
    else if(x>400 &&x<=800)
    {
        int y=12 ;
        float incre =x*.12;
        float new_salary =x+incre;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",incre);
        printf("Em percentual: %d %%\n",y);
    }
    else if(x>800 && x<=1200)
    {
        int y =10;
        float incre=x*.10;
        float new_salary =x+incre;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",incre);
        printf("Em percentual: %d %%\n",y);
    }
    else  if(x>1200 &&x<=2000)
    {
        int y=7;
        float incre =x*.07;
        float new_salary =x+incre;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",incre);
        printf("Em percentual: %d %%\n",y);

    }
    else
    {
        int y=4 ;
        float incre =x*.04;
        float new_salary =x+incre;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",incre);
        printf("Em percentual: %d %%\n",y);
    }
    return 0 ;
}

