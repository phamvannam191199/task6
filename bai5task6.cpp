#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char kyTu;

	printf("\t\t  MENU\n");
	printf("\t========================");
	printf("\n\t2. C");
	printf("\n\t3. HDJ");
	printf("\n\t4. DreamWeaver");
	printf("\n\t5. RDBMS");
	printf("\n\t6. Learn Java By Example\n");
	printf("\t========================");
	printf("\n\tChon: ");
	kyTu = getchar();

	switch (kyTu)
	{
	 	case '1':
			printf("\n\tBan chon CF!");
			break;
	 	case '2':
			printf("\n\tBan chon C!");
			break;
		case '3':
			printf("\n\tBan chon HDJ!");
			break;
	 	case '4':
			printf("\n\tBan chon DreamWeaver!");
			break;
	 	case '5':
			printf("\n\tBan chon RDBMS!");
			break;
	 	case '6':
			printf("\n\tBan chon Learn Java by Example!");
			break;
	default:
			printf("\n\tBan chon Sai!");
			break;
	}	
	return 0;
}


