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
   // ��������� ����� ������� item � ������� ��� ���������� ��������� �� ������, ���� �� ��� ���� � �������
   product *insert_or_assign(product *item);

   // ������� ���������� ������� �� �������
   void print();
   // ������ ������� �� ����������� ����� f
   void input(FILE *f);
};
#endif