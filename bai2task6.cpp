#include <stdio.h>

main(void)
{
char kyTu;
printf("Nhap vao mot ky tu trong bang Alphabet<a-z>,<A-Z>: ");
kyTu = getchar();
if(kyTu >= 'a' && kyTu<='z'||kyTu >= 'A' && kyTu<='Z'||kyTu >= '0' && kyTu<='9')
{
if(kyTu >= 'a' && kyTu<='z')
printf("Ky tu '%c' la chu thuong!\n", kyTu);
if(kyTu >= 'A' && kyTu<='Z')
printf("Ky tu '%c' la chu in hoa!\n", kyTu);
if(kyTu >= '0' && kyTu<='9')
printf("Ky tu '%c' la chu so!\n", kyTu);
}
else 
printf("%c khong nam trong bang chu cai Alphabet va chu so", kyTu);
}
