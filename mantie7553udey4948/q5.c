#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "q2.h"
//
// Created by Udey4948 on 2026-01-30.
//

/*
 * 5. A function saveData that will write the array out to a binary file with the specified name.
 * Note that the number of records will be written into the first 4 bytes of the file.
 * Return any error code from writing the file or 0 if no error occurred.
 *
 * Food Category Code (FCC) – a letter indicating the food category (stored in least significant byte)
 * Food Handling Code (FHC) – a value in the range 0 to 255
 * Food Serial Number (FSN) – a value in the range 0 to 65535 (stored in most significant bytes)
 * Signature:
 * int saveData(unsigned int* iFoodArrayPtr, int iSize, char* outputFileName);
*/

int saveData(unsigned int* iFoodArrayPtr, int iSize, char* outputFileName)
{
	FILE* filePtr = NULL;
	int iErr = EXIT_SUCCESS;
	int retVal; // tracks num of writes
	int iRetSize;

	filePtr = fopen(outputFileName, "wb"); //open the file to write in binary

	if (filePtr != NULL)
	{
		iRetSize = fwrite(&iSize, sizeof(int), 1, filePtr); //write the file size for the array	
		retVal = fwrite(iFoodArrayPtr, sizeof(int), iSize, filePtr); //writes the array in the space allocated for it


		if (retVal > 0 && iRetSize > 0) //if success
		{
			printf("File written %s\n", outputFileName);
		}
		else //failed to write
		{
			if (iErr = ferror(filePtr))
			{
				printf("Failed to write");
			}
			else
			{
				printf("could not write the data");
			}
		}

		fclose(filePtr); //close the file when done
		printf("File was successfully opened and closed %s\n", outputFileName);
	}
	else //Didnt work
	{
		iErr = errno;
		printf("Error trying to access file %s: %s\n", outputFileName, strerror(iErr));
	}
	return iErr; //return error code
}