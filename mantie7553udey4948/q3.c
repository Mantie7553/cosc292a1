//
// Created by udey4948 on 2026-01-30.
//
//A function getRecord that sets the variables passed to it to the FCC, FHC, and FSN
//of a particular record given by the index number of that record in the integer array.
#include "q2.h"
#include <stdio.h>

void getRecord(int iRecordLoc, char* FCC, unsigned char* FHC, unsigned short* FSN, unsigned int* iFoodArrayPtr)
{
	unsigned char* bPtr = (unsigned char*)&iFoodArrayPtr[iRecordLoc];
	*FCC = *bPtr;
	*FHC = *(bPtr + 1);
	unsigned short* sPtr = (unsigned short*)&iFoodArrayPtr[iRecordLoc];
	*FSN = *(sPtr + 1);


}

// helper function to print results of getRecord
void printRecordData(char FCC, unsigned char FHC, unsigned short FSN)
{
	printf("%c %hhu %hu", FCC, FHC, FSN);
}