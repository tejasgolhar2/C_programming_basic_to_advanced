#include<stdio.h>
#include<string.h>

int main()
{

	

	char str[20];
	printf("Enter the string value:\n");
	gets(str);


	// Approach 1 : Using the strlwr() function

	// strlwr(str);
	// printf("The string value in lowercase is : %s",str);



	// Approach 2 : Without using strlwr() function

	// This logic is based on the relation between the ASCII values of the upper and lower alpahabets

	int word_len = strlen(str) - 1 ;
	for(int i=0;i<strlen(str);i++)
	{
		if (int(str[i])<91)
		{
			str[i]=char(int(str[i])+32);
		}
	}
 	
	 printf("The string value in lowercase is : %s",str);

	return 0;
}