#include <stdio.h>
#include <stdlib.h>
#include "q1.h"

int main(void) {

    unsigned int iFoodArray[] = { 4294901841, 65370, 655320129 };
    int iSize = sizeof(iFoodArray) / sizeof(unsigned int);
    //Calls to your functions

    //Print the data from each record
    printData(iFoodArray, iSize);

    //Change the Food Category Code in Record 2 to a Y
    //setFCC('Y', 1, iFoodArray);
    //Change the Food Handling Code in Record 2 to 79
    //setFHC(79, 1, iFoodArray);
    //Change the Food Serial Number in Record 3 to 30001
    //setFSN(30001, 2, iFoodArray);

    //Print records to see if you get the expected results.
    //printData(iFoodArray, iSize);

    //Write your own test case to test getRecord


    //Write your own test case to search for a particular record.


    //Write test code to write to file and read from file


    return EXIT_SUCCESS;
}