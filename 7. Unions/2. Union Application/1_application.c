#include<stdio.h>
#pragma pack(1)				//	STRUCTURE PACKING

struct shop
{
	double price;			//	COMMON PROPERTY

	union					//	CHOOSE ONE ITEM AT A TIME
	{
		struct 
		{
			char *bookTitle;
			char *bookAuthor;
			int numPages;
		} book;
		
		struct 
		{
			char *design;
			int size;
			char *colour;
		} shirt;

	} item;

};

int main()
{
    //	ADD PROPERTIES OF A BOOK

    struct shop b1;
    b1.price = 18;
    b1.item.book = {"The Jungle Book", "Rudyard Kepling", 368};

    printf("%s\n", b1.item.book.bookTitle);
    printf("Size of 'b1': %lu\n", sizeof(b1));

	return 0;
}

//	APPLICATION 1

//		When we require few common properties and few different properties of elements.
//		Unions help to optimize the memory usage