#include <stdio.h>

main(void)
{
	char kyTu;

	printf("Nhap vao mot ky tu(Alphabet)<a-z><A-Z>: ");
	kyTu = getchar();

	if(kyTu<'A'&& kyTu >'Z' && kyTu<'a'&& kyTu>'z')
		printf("Ky tu khong thuoc bang chu cai Alphabet");
	 else
		printf("\nKy tu thuoc bang chu cai Alphabet\n");
		switch (kyTu)
	  	{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("\n'%c' la Nguyen Am",kyTu);
				break;
		 default:
				printf("\n'%c' la Phu Am",kyTu);
				break;
		}
}
