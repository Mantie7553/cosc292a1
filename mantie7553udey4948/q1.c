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
    char* fcc = (char*) iFoodArrayPtr;
    unsigned int* fccPtr = (unsigned int*) iFoodArrayPtr;
    unsigned short* fsn = (unsigned short*) iFoodArrayPtr;




}