/*	****************************************************************
	**  This program is provided to the professors and students   **
	**  using "Computer Science: A Structured Approach Using C,   **
	**  Second Edition." All reprints in any form must cite this  **
	**  copyright.                                                **
    **                                                            **
	**  Copyright(c) 2001 by Brooks/Cole                          **
	**  A division of Thomson Learning                            **
	****************************************************************
*/

/*	Build a dynamic array of names.
	   Written by: 
	   Date: 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FLUSH while (getchar() != '\n')

int main (void) 
{
/* Local Definitions */
	char  input[81];
	char **pNames;      /* array of pointers to char */

	int size;
	int namesIndex;

/* Statements */
	printf("How many names do you plan to input? ");
	scanf ("%d", &size);
	FLUSH;
	
	/* Allocate array in heap.
	   One extra element added for loop control */
	pNames = (char **) calloc (size + 1, sizeof (char *));
	printf("Enter names. <EOF> to stop\n");
	
	namesIndex = 0;
	while (namesIndex < size 
	    && fgets(input, sizeof(input), stdin))
	    {
	     *(pNames + namesIndex)  = (char *) 
	          calloc (strlen(input) + 1, sizeof(char));
	     strcpy (*(pNames + namesIndex), input);
	     namesIndex++;
	   } /* while */
	
	*(pNames + namesIndex) = NULL;
	printf("\nYour names are: \n");
	namesIndex = 0;
	while (*(pNames + namesIndex))
	   {
	    printf("%3d: %s", 
	            namesIndex, *(pNames + namesIndex) );
	    namesIndex++;
	   } /* while */

	return 0;
}	/* main */

/*	Results:
	How many names do you plan to input? 3
	Enter names. <EOF> to stop
	Tom
	Rico
	Huang

	Your names are: 
	  0: Tom
	  1: Rico
	  2: Huang
*/
