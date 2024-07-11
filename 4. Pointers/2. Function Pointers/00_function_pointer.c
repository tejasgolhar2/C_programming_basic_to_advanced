#include<stdio.h>

void addNum(int a, int b)
{
	printf( a + b);
}


int main()
{
    
	
    void (*ptr)(int, int) = &addNum;			//	Approach 1: 	Use of '&' and '*'	

 	*ptr(5,6);									//	Function Dereferencing



    void (*qtr)(int, int) = addNum;				//	Approach 2: 	Without using '&' and '*'	

    qtr(2,322);									//	Dereferencing not needed



    
	int *rtr(int, int); 						//	Wrong Approach

	//	Declares a function named 'rtr' --> return int pointer --> two int parameters			
		

	return 0; 
}



//	1) 		Unlike normal pointers, a function pointer points to code, not data. 
//		Typically a function pointer stores the start of executable code.

//	2) 		Unlike normal pointers, we do not allocate de-allocate memory using function pointers.

//	3) 		A function’s name can also be used to get functions’ address. The program still works even address operator ‘&’ in assignment have removed AND function call by removing *
//		Pointer capable of pointing to a function