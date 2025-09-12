#include <stdio.h>

int main() {
    int n, h, m, s;
    scanf("%d", &n);

    h = n / 365;
    m = (n % 365) / 30;
    s = (n % 365) % 30;

    printf("%d ano(s)\n", h);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", s);

    return 0;
}

