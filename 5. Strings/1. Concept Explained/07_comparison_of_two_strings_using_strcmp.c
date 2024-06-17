#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char name[10],surname[10];
	printf("Enter the name string:\n");
	gets(name);

	printf("Enter the surname string:\n");
	gets(surname);


	//Lets compare the name and surname
	// 		The strcmp( arg1,arg2 ) function 
	//		It's a function which basically takes the base address of both the strings.
	//   From the base address, it checks character by character whether the characters of both are 
	//   same or not with the help of corresponding ASCII value of the string
	//	 It returns -  
  	//  	0 - when both are same strings
  	//  	1 - when the ASCII value of the correspoding 1st argument is greater than the 2nd ones ASCII
  	//  		of the correspoding positioned character
  	// 		-1 - when the ASCII value of the correspoding 1st argument is lesser than the 2nd ones ASCII
  	//  		of the correspoding positioned character

	int val = strcmp(name,surname);
	
	if (val==0)
	{
		printf("Both the strings are same\n");
	}
	else if(val==1)
	{
		printf("The 1st string's ASCII is found greater than that of 2nd's correspoding character\n");
	}
	else
	{
		printf("The 1st string's ASCII is found lesser than that of 2nd's correspoding character\n");
	}

	printf("Result of 'strcmp' : %d", val);

	return 0;
}