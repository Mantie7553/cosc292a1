//
// Created by udey4948 on 2026-01-30.
//
//•	Food Category Code (FCC) – a letter indicating the food category (stored in least significant byte)
//•	Food Handling Code (FHC) – a value in the range 0 to 255
//•	Food Serial Number (FSN) – a value in the range 0 to 65535 (stored in most significant bytes)
// Three functions named setFCC, setFHC, and setFSN
// to change each data item in a particular record given by the index number of that record in the integer array.

#include <stdio.h>
#include "q2.h"
void setFCC(char cValue, int iRecordLoc, unsigned int* iFoodArrayPtr)
{
   //Points at the first bit in the array
    unsigned char* bPtr = (unsigned char*)&iFoodArrayPtr[iRecordLoc];
    *bPtr = cValue; //sets the value where the pointer is pointing


}
void setFHC(unsigned char iValue, int iRecordLoc, unsigned int* iFoodArrayPtr)
{
    // points at the second bit in the array 
    unsigned char* bPtr = (unsigned char*)&iFoodArrayPtr[iRecordLoc];
    *(bPtr + 1) = iValue; //sets the value
}
void setFSN(unsigned short sValue, int iRecordLoc, unsigned int* iFoodArrayPtr)
{
    //short assignment to assign the short
    unsigned short* bPtr = (unsigned short*)&iFoodArrayPtr[iRecordLoc];
    *(bPtr + 1) = sValue; //sets the short 
}
