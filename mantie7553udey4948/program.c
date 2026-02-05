#include <stdio.h>
#include <stdlib.h>
#include "q2.h"

int main(void) {
    printf("Hello, World!\n");


    unsigned int iFoodArray[] = { 4294901841, 65370, 655320129 };
    int iSize = sizeof(iFoodArray) / sizeof(unsigned int);
    //Calls to your functions
    // 
    //Print the data from each record
    printData(iFoodArray, iSize);

    //Change the Food Category Code in Record 2 to a Y
     setFCC('Y', 1, iFoodArray);

    if (iFoodArray[1] == 65370) {
        printf("False");
    }else {
        printf("True");
    }
    //Change the Food Handling Code in Record 2 to 79
    setFHC(79, 1, iFoodArray);
    unsigned char* bPtr = (unsigned char*)&iFoodArray[1];
    if (*(bPtr + 1) == 79) {
        printf("FHC correct!\n");
    }
    //Change the Food Serial Number in Record 3 to 30001
    setFSN(30001, 2, iFoodArray);
    unsigned short* sPtr = (unsigned short*)&iFoodArray[2];
    if (*(sPtr + 1) == 30001) {
        printf("FSN correct!\n");
    }
    //Print records to see if you get the expected results.
    printData(iFoodArray, iSize);

    //Write your own test case to test getRecord
    char testFCC;
    unsigned char testFHC;
    unsigned short testFSN;

    getRecord(1, &testFCC, &testFHC, &testFSN, iFoodArray);
    printRecordData(testFCC, testFHC, testFSN);

    //Write your own test case to search for a particular record.


    //Write test code to write to file and read from file

    return 0;

}