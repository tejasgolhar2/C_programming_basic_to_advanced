#include<stdio.h>
#include<string.h>

int main()
{
    char name1[10] = "Ramesh";
    char name2[10];
    char name3[10];

    printf("%s\n", name1);

    printf("%s\n", strcpy(name2, name1));		//	return pointer to first character of destination

    strcpy(name3, name2);
    printf("%s\n", name3);

	return 0;
}

//	Copy string from source to the destination 
//			-->		strcpy( destination, source)

//	PROTOTYPE:  char* strcopy( char* destination, const char* source)

//	source --> string inlcuding NULL Characters
//	destination	--> character array

//	NOTE: 	
//		1.	SOURCE REMAINS CONSTANT DURING THE COPY OPERATION
//		2.	size(destination) < size(source) --> 	UNDEFINED BEHAVIOUR
//		3.  NO SIZE check for accomodation by "DESTINATION"