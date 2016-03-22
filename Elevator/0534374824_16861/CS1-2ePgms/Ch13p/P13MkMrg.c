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

/*	Makes binary files for merge program.
	   Written by:
	   Date:
*/
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
/*	Local Definitions */
	int   num;
	FILE *fp;
	
/*	Statements */
	printf("Make merge files.\n");
	
	if (!(fp = fopen ("P13Mrg1.bin", "wb")))
	    printf("\aCan�t open P13Mrg1\n"), exit (100);
	num = 14;
	fwrite (&num, sizeof(int), 1, fp);
	num = 17;
	fwrite (&num, sizeof(int), 1, fp);
	num = 18;
	fwrite (&num, sizeof(int), 1, fp);
	num = 21;
	fwrite (&num, sizeof(int), 1, fp);
	num = 23;
	fwrite (&num, sizeof(int), 1, fp);
	num = 25;
	fwrite (&num, sizeof(int), 1, fp);
	num = 31;
	fwrite (&num, sizeof(int), 1, fp);
	
	fclose(fp);
	
	if (!(fp = fopen ("P13Mrg2.bin", "wb")))
	    printf("\aCan�t open P13Mrg2.bin\n"), exit (100);
	num = 10;
	fwrite (&num, sizeof(int), 1, fp);
	num = 12;
	fwrite (&num, sizeof(int), 1, fp);
	num = 15;
	fwrite (&num, sizeof(int), 1, fp);
	num = 16;
	fwrite (&num, sizeof(int), 1, fp);
	num = 19;
	fwrite (&num, sizeof(int), 1, fp);
	num = 27;
	fwrite (&num, sizeof(int), 1, fp);
	num = 28;
	fwrite (&num, sizeof(int), 1, fp);
	
	fclose (fp);    
	printf("End of merge file creation\n");
	
	return 0;
}	/* main */

/*	Results:
	Make merge files.
	End of merge file creation
*/
