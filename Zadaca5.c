#include <stdio.h>
int main()
{
    float r,L,P;
    printf("Vnesi radius na krug\n");
    scanf("%f",&r);
    L=2*r*3.14;
    P=r*r*3.14;
    printf("Plostinata na krugot e %.2f, a perimetarot e %.2f\n",P,L);
    return 0;
}
