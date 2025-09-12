
#include <stdio.h>

int main() {

  double A,B,C, pi = 3.14159,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf %lf %lf",&A , &B, &C);
 TRIANGULO =(1.00/2.00)*A * C ;
 printf("TRIANGULO: %.3lf\n",TRIANGULO);
 CIRCULO = pi*C*C;
 printf("CIRCULO: %.3lf\n",CIRCULO);
 TRAPEZIO =(1.00/2.00)*(A+B)*C ;
 printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
 QUADRADO =B*B ;
 printf("QUADRADO: %.3lf\n",QUADRADO);
 RETANGULO = A*B;
 printf("RETANGULO: %.3lf\n",RETANGULO);
    return 0;
}
