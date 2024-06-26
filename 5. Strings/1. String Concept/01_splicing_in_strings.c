#include<stdio.h>

int main()
{

	//	Printing Multiple Lines 
    
//    printf("%s\n", "Old is Gold and gold is a noble metal
//    	-- Anon");								//	ERROR


	//	SPLICING STRINGS
	

    //	Approach 1 - Printing Multiple Lines	- 	NON-RELIABLE
   
    printf("%s\n", "Old is Gold and gold is a noble metal\
    -- Anon");    								//	Slash adds new line


    //	Approach 2 - Printing Multiple Lines	- 	RELIABLE
   
    printf("%s\n", "Old is Gold and gold is a noble metal"		
    "-- Anon");    							//	Slash adds new line

	return 0;
}


//	Approach 1 Disadvantage: ALL SPACES ARE INCLUDED IN THE PRINTED STRING ( INDENTATION NOT HIDDEN )