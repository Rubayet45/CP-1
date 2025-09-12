
#include <stdio.h>

int main() {

    int s,t,v ;
    float fuel ;
    scanf("%d%d",&t,&v) ;
    s = v*t ;
    fuel = s/12.00 ;
    printf("%.3f\n", fuel) ;

    return 0 ;
}
