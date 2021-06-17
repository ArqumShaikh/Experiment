
// Hello Worls Program

#include <stdio.h>
void greeting(char name[]);
int main()
{
	char name[] = "Alia Bhat"; 
	greeting(name);
	return 0;
}
 
void greeting(char name[]){
	printf("Hey!Where were you?..%s",name); 	
}

