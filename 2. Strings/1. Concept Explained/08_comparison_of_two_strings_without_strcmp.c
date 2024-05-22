#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	bool flag = 0;

	char name1[10],name2[10];
	printf("Enter the fist string:\n");
	gets(name1);

	printf("Enter the fist string:\n");
	gets(name2);

	for(int i=0;(name1[i]!='\0')||(name2[i]!='\0');i++)
	{
		if (name1[i]!=name2[i])
		{
			flag = 1;
			break;
		}
	}

	if(flag==0)
	{
		printf("The strings are same\n");
	}
	else{
		printf("The strings are different\n");
	}
	return 0;
}