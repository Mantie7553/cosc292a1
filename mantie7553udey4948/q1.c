#include <stdio.h>
#include <stdlib.h>

//
// Created by mantie7553 on 2026-01-30.
//

/*
 * 1. A function printData which prints each record in the array, showing the FCC, FHC, and FSN, to the console window.
 * Food Category Code (FCC) – a letter indicating the food category (stored in least significant byte)
 * Food Handling Code (FHC) – a value in the range 0 to 255
 * Food Serial Number (FSN) – a value in the range 0 to 65535 (stored in most significant bytes)
 *
*/

void printData(unsigned int* iFoodArrayPtr, int iSize)
{
    for (int i = 0; i < iSize; i++)
    {
        // char pointer to the current item in the array, used to break down information into separate bytes
        char* foodItem = (char*)&iFoodArrayPtr[i];
        // any character can be stored in the first byte
        char fcc = foodItem[0];
        // only values between 0 - 255 can be stored in the second byte
        unsigned char fhc = foodItem[1];
        // gets pointer to the 3rd byte
        // as it is a short pointer this can be dereferenced to also get the value from the 4th byte
        unsigned short* fsnPtr = (unsigned short*)&foodItem[2];

        printf("\nFood Item %d: FCC='%c', FHC=%u FSN=%u\n", i + 1, fcc, fhc, *fsnPtr);
    }

}