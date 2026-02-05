#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "q1.h"
//
// Created by mantie7553 on 2026-01-30.
//

/*
 * 6. A function readAndPrintData that will:
 *      a. Read the number of records from the specified input file into an integer.
 *      b. Read each record from the input file and print each record, showing the FCC, FHC, and FSN, to the specified output file as text.
 *
 * Food Category Code (FCC) – a letter indicating the food category (stored in least significant byte)
 * Food Handling Code (FHC) – a value in the range 0 to 255
 * Food Serial Number (FSN) – a value in the range 0 to 65535 (stored in most significant bytes)
 *
 *      Signature:
 * void readAndPrintData(char* inputBinaryFileName, char* outputTextFileName);
*/


void readAndPrintData(char *inputBinaryFileName, char *outputTextFileName)
{
    FILE *fileIn = NULL;
    FILE *fileOut = NULL;
    int iErr = EXIT_SUCCESS;
    int iCount, iData;

    if ((fileIn = fopen(inputBinaryFileName, "r")) == NULL)
    {
        fread((void *) &iCount, sizeof(int), 1, fileIn);
        if ((fileOut = fopen(outputTextFileName, "w")) == NULL)
        {
            for (int i = 0; i < iCount; i++)
            {
                fread((void *) &iData, sizeof(int), 1, fileIn);
                char* foodItem = (char*)&iData;
                char fcc = foodItem[0];
                unsigned char fhc = foodItem[1];
                unsigned short* fsnPtr = (unsigned short*)&foodItem[2];
                fwrite(&fcc, sizeof(char), 1, fileOut);
                fwrite(&fhc, sizeof(unsigned char), 1, fileOut);
                fwrite(fsnPtr, sizeof(unsigned short), 1, fileOut);
            }
            fclose(fileOut);
            printf("File %s closed.\n", outputTextFileName);
        } else
        {
            iErr = errno;
            printf("Error while opening the file %s: %s\n", inputBinaryFileName, strerror(iErr));
        }

        fclose(fileIn);
        printf("File %s closed.\n", inputBinaryFileName);
    } else
    {
        iErr = errno;
        printf("Error while opening the file %s: %s\n", inputBinaryFileName, strerror(iErr));
    }
}
