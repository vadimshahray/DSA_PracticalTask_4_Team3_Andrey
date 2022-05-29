#ifndef H_TABLE
#define H_TABLE

#include <stdio.h>
#include <windows.h>
#include "product.h"

const char Nmax = 10;

struct table
{
   private:
   ULONGLONG size = 0;
   product *data[Nmax] = { };

   bool index_of(product *item, ULONGLONG &i);

   public:
   // Добавляет новый элемент item в таблицу или возвращает указатель на старый, если он уже есть в таблице
   product *insert_or_assign(product *item);

   // Выводит содержимое таблицы на консоль
   void print();
   // Строит таблицу по содержимому файла f
   void input(FILE *f);
};
#endif