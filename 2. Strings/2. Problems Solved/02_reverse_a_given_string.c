#include<stdio.h>
#include<string.h>

int main()
{
	// Approach 1 : Using built-in function
	// char value[10];
	// printf("Enter the value of a string varible:\n");
	// gets(value);

	// // Use the strrev function
	// strrev(value);

	// printf("The reversed sring value is %s",value);


	// Approach 2: By usig algorithm
	char val2[20];
	printf("\nEnter the value of a string variable:\n");
	gets(val2);


	int w_len = strlen(val2)-1;			// INDEX VALUE of last character

	for(int i=0;i<w_len/2;i++)
	{
		char temp = val2[i];
		val2[i]=val2[w_len-i];
		val2[w_len-i]=temp;
	}
	
	printf("The reversed string is : %s",val2);
	return 0;
}