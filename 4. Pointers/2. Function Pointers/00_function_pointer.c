#include<stdio.h>

int addNum(int a, int b)
{
	return a + b;
}


int main()
{
    
	//	Appraoch 1
    int (*ptr)(int, int) = &addNum;		//	Pointer to function with return type 'int' and takes two 'int' inputs

    //	Approach 2
    int (*qtr)(int, int) = addNum;

    //	Wrong Approach
	int *rtr(int, int); 				//	Declares a function named 'rtr' --> return int pointer --> two int parameters			
	
	int result1 = *ptr(5,6);			//	Function Dereferencing
	printf("Approch 1: Result - %d\n", result1);

	int result2 = qtr(2,322);			//	Dereferencing not needed
	printf("Approch 2: Result - %d\n", result2);

	return 0; 
}

//	Pointer capable of pointing to a function