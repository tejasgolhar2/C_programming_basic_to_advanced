#include<stdio.h>
#include<string.h>

int main()
{
	int name_len,surname_len;

	char name[30]="Tejas ";
	char surname[30]="Golhar";

	
	//	Before moving the source string characters to the destination, we must be known with the legth of both the strings.
	name_len = strlen(name);
	surname_len = strlen(surname);

	for(int i = 0;i<=surname_len;i++)
	{
		name[name_len+i] = surname[i];
	}

	printf("The conacatenated string: %s\n",name);
	//puts(surname);
	return 0;
}