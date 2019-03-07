#include <stdio.h>
#include <ctype.h>

struct randomStruct
{
  int num1;
  int num2;
  char str[32];
};


int main()
{
  struct randomStruct myStruct = {-99, 22, "ITESM Monterrey"};
  
  printf("ORIGINAL\n");
  printf("Integer 1: %i \nInteger 2: %i \nString: %s \n", myStruct.num1, myStruct.num2, myStruct.str);
  printf("---------------------\n");

  myFunction2(myStruct);
  printf("PARAMETRO SIN REFERNCIA\n");
  printf("Integer 1: %i \nInteger 2: %i \nString: %s \n", myStruct.num1, myStruct.num2, myStruct.str);
  printf("---------------------\n");

  myFunction(&myStruct);
  printf("PARAMETRO POR REFERNCIA\n");
  printf("Integer 1: %i \nInteger 2: %i \nString: %s \n", myStruct.num1, myStruct.num2, myStruct.str);

  return 0;
  return 0;
}