#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void greeting(char name [150],int age){
	printf("hello %s",name);
	printf("hello %s age %d",name , age);

	
   if(age>10)
	printf("%s",name);
	else 
	printf("fail\n");
	}
	int main(){
	    int hello();
	    char myname[150];
	    gets(myname);
	int myage;
	scanf("%d",myage);
	    greeting(myname,myage);
	    
	    
return 0;}
