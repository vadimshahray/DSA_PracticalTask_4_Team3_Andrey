#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include "table.h"

int main()
{
   setlocale(0, "");

   FILE *f = NULL;
   errno_t err = fopen_s(&f, "WORK.txt", "r");

   if (f)
   {
      table t;

      t.input(f);
      fclose(f);

      t.print();
   }
   else perror("Не удалось открыть файл с данными.");

   return 0 * _getch() + err;
}