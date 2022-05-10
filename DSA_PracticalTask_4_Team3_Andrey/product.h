#ifndef H_PRODUCT
#define H_PRODUCT

#include <windows.h>

const char CODE_SIZE = 9, NAME_SIZE = 10;

struct product
{
   char code[CODE_SIZE] = { },
        name[NAME_SIZE] = { };

   ULONGLONG amount = 0;
};
#endif