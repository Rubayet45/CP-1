#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i =1;i<=t;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}

