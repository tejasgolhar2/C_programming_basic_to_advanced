#include<stdio.h>

struct abc 
{
	int x;
	int y;
	int z;
};

int main() 
{
	struct abc a = {.y = 20, .x = 10, .z = 30};	
	
	printf("%d %d %d", a.x, a.y, a.z);
	return 0;
}

//	NO NEED TO FOLLOW DECLARATION ORDER OF STRUCT MEMBER

//  MENTION VALUE WITH (.) OPERATOR AND MEMBER NAME TO INITIALIZE