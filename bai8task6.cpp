#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
float a, b, c, delta, x1, x2, x12;

printf("a*x*x + b*x + c = 0");
printf("\na=");
scanf("%f", &a);
printf("\nb =");
scanf("%f", &c);
printf("\nc =");
scanf("%f", &c);
delta = b*b - 4*a*c;
printf("Delta = %f\n", delta);
if(delta == 0)
x12 = -b/2*a;
printf("Phuong trinh nay co mot nghiem kep:\n\t x1 = x2 = %f\n", x12);
if(delta<0)
printf("Phuong trinh vo nghiem");
if (delta>0)
x1=(-b+sqrt(delta))/2*a;
x2=(-b-sqrt(delta))/2*a;
printf("Phuong trinh co 2 nghiem:\n\tx1 = %f\n\tx2 = %f\n",x1, x2);
}
