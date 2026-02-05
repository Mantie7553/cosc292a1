//
// Created by udey4948 on 2026-01-30.
//

#ifndef COSC292A1_Q2_H
#define COSC292A1_Q2_H

void setFCC(char cValue, int iRecordLoc, unsigned int* iFoodArrayPtr);
void setFHC(unsigned char iValue, int iRecordLoc, unsigned int* iFoodArrayPtr);
void setFSN(unsigned short sValue, int iRecordLoc, unsigned int* iFoodArrayPtr);
void getRecord(int iRecordLoc, char* FCC, unsigned char* FHC, unsigned short* FSN, unsigned int* iFoodArrayPtr);

#endif //COSC292A1_Q2_H