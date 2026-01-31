#include <stdio.h>
#include <stdlib.h>

//
// Created by mantie7553 on 2026-01-30.
//


/*
 * 4. A search function findRecord that returns the address of a record based on the Food Serial Number.
 * Return NULL if the Food Serial Number is not found in any record.
 *
*/

unsigned int* findRecord(unsigned short FSN, unsigned int* iFoodArrayPtr, int iSize)
{
    for (int i = 0; i < iSize; i++)
    {
        // char pointer to the current item in the array, used to break down information into separate bytes
        char* foodItem = (char*)&iFoodArrayPtr[i];

        // gets pointer to the 3rd byte
        // as it is a short pointer this can be dereferenced to also get the value from the 4th byte
        unsigned short* fsnPtr = (unsigned short*)&foodItem[2];

        if (*fsnPtr == FSN)
        {
            return &iFoodArrayPtr[i];
        }
    }
    return NULL;
}
