#include<stdio.h>

int main()
{
	char name[10] = "Kunal";

	
	printf("%s\n",name);


	// SPECIFY WIDTH
	printf("%10s \n",name);	


	// SPECIFY NUMBER OF CHARACTERS
	printf("%.3s \n",name);

	// WIDTH + CHARACTERS
	printf("%15.4s \n",name);
	return 0;
}