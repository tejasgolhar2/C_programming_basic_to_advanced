#include<stdio.h>

int main()
{

	//	Printing Multiple Lines 
    
//    printf("%s\n", "Old is Gold and gold is a noble metal
//    	-- Anon");								//	ERROR


	//	SPLICING STRINGS
	

    //	Approach 1 - NON-RELIABLE
   
    printf("%s\n", "Old is Gold and gold is a noble metal\
    -- Anon");    								              //	Slash adds new line

    //  ALL SPACES ARE INCLUDED IN THE PRINTED STRING ( INDENTATION NOT HIDDEN )


    //	Approach 2 - RELIABLE
   
    printf("%s\n", "Old is Gold and gold is a noble metal"		
    "-- Anon");

	return 0;
}
