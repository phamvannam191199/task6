#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a, b, c;

	printf("Nhap vao 3 so nguyen a b c:");
	scanf("%d%d%d", &a,&b,&c);

	if(c*c == a*a+b*b)
		{
		printf("Day la do dai 3 canh cua 1 tam giac vuong\n");
		printf("%d la do dai cua canh huyen", c);
		}
	else 
	printf("Day khong phai do dai 3 canh cua 1 tam giac vuong");
	return 0;
}
