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

   public:
   /// <summary>
   /// Добавляет новый элемент item в таблицу или возвращает указатель на старый, если он уже есть в таблице
   /// </summary>
   product *insert_or_assign(product *item);

   /// <summary>
   /// Выводит содержимое таблицы на консоль
   /// </summary>
   void print();
   /// <summary>
   /// Строит таблицу по содержимому файла f
   /// </summary>
   void input(FILE *f);
};
#endif