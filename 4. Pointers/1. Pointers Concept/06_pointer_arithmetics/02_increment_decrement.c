#include<stdio.h>


int main()
{
    int array[10] = { 1, 33, 45, 93, 6, 4, 84, 68, 986, 7};

    int *p = &array[0];				//	p  ->  0th Index

    //	INCREMENT
    //		POST-INCREMENT

    printf("%d\n", *(p++));	
    printf("%d\n", *p);				//	p  ->  1st Index

    //		PRE-INCREMENT

    printf("%d\n", *(++p));			//	p  ->  2nd Index


 

    int *q = &array[9];				//	q  -> 9th Index

    //	DECREMENT
    //		PRE-DECREMENT

    printf("\n%d\n", *(--q));		//	q  -> 8th Index
    		

    //		POST-DECREMENT

    printf("%d\n", *(q--));		
    printf("%d\n", *q);			//	q  ->  7th Index

	return 0;
}