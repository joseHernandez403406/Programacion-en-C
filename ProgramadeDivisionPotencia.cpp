#include  <stdio.h>
#include <math.h>

int main (void) {
float a,b,d,p;

printf("indica el valor de a :\n");
scanf("%f",&a);
printf("indica el valor de b:\n");
scanf("%f",&b);
d= a/b;
printf(" el resultado  de la division es:%f\n",d);
p= pow (d,b);
printf(" el resultado  de operación es:%f\n",p);
return 0 ;
}