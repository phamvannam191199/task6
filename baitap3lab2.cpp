#include<stdio.h>

int main(){
	
	int a,b;
	printf("nhap gia tri  cua a =");
	scanf("%d",&a);
	
	printf("nhap gia tri cua b =");
	scanf("%d",&b);
	
	int tong =a+b ;
	printf("\n %d + %d = %d" ,a, b, tong);
	
	int hieu =a-b ;
	printf("\n %d - %d = %d" ,a, b, hieu);
	
	int tich =a*b ;
	printf("\n %d * %d = %d", a, b, tich);
	
	int thuong =a/b ;
	printf("\n %d / %d = %d", a, b, thuong);
	
	
}
