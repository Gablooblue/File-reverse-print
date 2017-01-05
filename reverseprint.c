#include <stdio.h>

/* Im gonna start adding comments to my programs 
	just to make your lives easier*/
void main()
{
	FILE *file;
	file = fopen("reverse.txt", "r");
	int count = 0, reader, x, nullchar;
	char letter;
	
	
	/* This little bastard right here counts the number of characters
	in the file and then returns it to the main function*/
	do
	{
		x = fgetc(file);
		count++;
	}while(x != EOF);
	nullchar = count;	
	
	// this is the shit that prints the shit 
	for(;count > 0; count--)
	{
		for(reader = 0; reader < count; reader++)
		{
			letter = fgetc(file);
		}
		if(count != nullchar)
		{
			printf("%c", letter);
		}
		
		rewind(file);
	}
	
	fclose(file);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/* You found the Easter egg
	int fag;
	FILE *gay;
	
	gay = fopen("Gaaaaaaaaaaay.txt", "a");
	for(fag = 2000; fag > 0; fag--)
	{
		fprintf(gay, " GAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAY ");
	}*/
}

