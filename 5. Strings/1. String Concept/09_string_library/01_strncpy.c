#include<stdio.h>
#include<string.h>

int main()
{
    char name1[10] = "Ramesh";
    char name2[10];

    printf("%s\n", name1);

    strncpy(name2, name1, sizeof(name2));
    name2[9] = '\0';

    printf("%s\n", name2);


	return 0;
}

//	Copy string of size equal to destination from source to the destination 
//			-->		strcpy( destination, source, sizeof(destination))

//  If ( sizeof(source) >= sizeof(destination)  )      -->  Null Character not added in destination string
//      NEED FOR EXPLICIT ADDITION OF NULL CHARACTER IN THE END OF DESTINATION


//	NOTE: 	
//		1.	SOURCE REMAINS CONSTANT DURING THE COPY OPERATION
//		2.	sizeof(destination) -->  Only string of this size is copied into destination