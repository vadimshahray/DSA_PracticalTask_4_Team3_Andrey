#ifndef H_ITEM
#define H_ITEM

#include "product.h"

// Не переписывать
struct item
{
   item(const char _key[CODE_SIZE], product _value) : value(_value)
   {
      size_t s = sizeof key;
      for (char i = 0; i < s; i++)
         key[i] = _key[i];
   }

   private:
   char key[CODE_SIZE];

   public:
   product value;

   char * get_key()
   {
      return key;
   }
};
#endif