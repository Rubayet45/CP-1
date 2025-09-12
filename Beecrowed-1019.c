#include <stdio.h>

int main() {

    int N ,y,m,d;
    scanf("%d",&N);
    y = N/3600;
    m = N %3600/60;
    d = N %60;
     printf("%d:%d:%d\n",y,m,d);

    return 0;



}
