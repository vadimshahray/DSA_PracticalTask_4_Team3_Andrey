#include <stdio.h>
#include <windows.h>
#include "item.h"
#include "table.h"
#include "product.h"

product *table::insert_or_assign(product *item)
{
   if (size == Nmax)
      return NULL;

   ULONGLONG i = 0;
   bool equals = false; // Нашелся ли элемент с таким же ключом
   
   for ( ; i < size && !equals; i++) // Поиск элемента с таким же ключом
   {
      equals = true;
      for (char j = 0; j < sizeof data[i]->code && equals; j++)
         equals = data[i]->code[j] == item->code[j];
   }

   if (!equals)
   {
      data[size++] = item;
      return NULL;
   }
   else return data[i - 1];
}

void table::input(FILE *f)
{
   char c;
   do
   {
      product *p = new product();
      fscanf_s(f, "%s", &p->code, (UINT)sizeof p->code);
      fscanf_s(f, "%s", &p->name, (UINT)sizeof p->name);
      fscanf_s(f, "%lli", &p->amount);

      product *fp = this->insert_or_assign(p);
      if (fp) 
         fp->amount += p->amount;

   } while (fscanf_s(f, "%c", &c, (UINT) sizeof c) != EOF);
}

void table::print()
{
   printf_s("%6s %11s %12s\n", "Шифр", "Название", "Количество");
   for (ULONGLONG i = 0; i < size; i++)
   {
      product *p = data[i];
      printf_s("%s %10s %11lli\n", p->code, p->name, p->amount);
   }
}