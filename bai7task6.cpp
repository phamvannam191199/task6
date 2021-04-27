#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a, b, c;

	int num1, num2;
	int mod1, mod2;

	printf("Nhap vao 2 so: ");
	scanf("%d %d", &num1, &num2);

	if(num1 == 0 || num2 == 0)
	printf("2 so khong la uoc cua nhau");

	mod1 = num1 % num2;
	mod2 = num2 % num1;

	if (mod1 != 0 || mod2 != 0)
		printf("2 so khong la uoc cua nhau\n");
	else
	{
		if (num1 >= num2 && mod1 == 0)
			printf("%d la uoc so cua %d", num2, num1);
		else
		 if(num1 <= num2 && mod2 ==0)
			printf("%d la uoc so cua %d", num1, num2);
	}
	return 0;
}
