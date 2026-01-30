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
    //EX:setFCC('Y',1,iFoodArray)
    //cast input cValue to a char print it out byte by byte to check where it is.
    iFoodArrayPtr[iRecordLoc] = (unsigned char)cValue;


}
void setFHC(unsigned char iValue, int iRecordLoc, unsigned int* iFoodArrayPtr)
{

}
void setFSN(unsigned short sValue, int iRecordLoc, unsigned int* iFoodArrayPtr)
{

}
