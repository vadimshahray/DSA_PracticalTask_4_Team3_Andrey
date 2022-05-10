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
   /// ��������� ����� ������� item � ������� ��� ���������� ��������� �� ������, ���� �� ��� ���� � �������
   /// </summary>
   product *insert_or_assign(product *item);

   /// <summary>
   /// ������� ���������� ������� �� �������
   /// </summary>
   void print();
   /// <summary>
   /// ������ ������� �� ����������� ����� f
   /// </summary>
   void input(FILE *f);
};
#endif