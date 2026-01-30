//
// Created by mantie7553 on 2026-01-30.
//

/*
 * 5. A function saveData that will write the array out to a binary file with the specified name.
 * Note that the number of records will be written into the first 4 bytes of the file.
 * Return any error code from writing the file or 0 if no error occurred.
 *
 * Food Category Code (FCC) – a letter indicating the food category (stored in least significant byte)
 * Food Handling Code (FHC) – a value in the range 0 to 255
 * Food Serial Number (FSN) – a value in the range 0 to 65535 (stored in most significant bytes)
 * Signature:
 * int saveData(unsigned int* iFoodArrayPtr, int iSize, char* outputFileName);
*/

