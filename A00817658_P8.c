//Name: Oscar Michel Herrera
//Matricula: A00817658
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

struct randomStruct
{
  int num1;
  int num2;
  char str[32];
};

void myFunction(struct randomStruct *myStruct)
{
  int calculate1 = myStruct->num1 + myStruct->num2;
  int calculate2 = myStruct->num1 - myStruct->num2;
  myStruct->num1 = calculate1;
  myStruct->num2 = calculate2;

  for(int i = 0; myStruct->str[i]; i++)
   myStruct->str[i] = toupper(myStruct->str[i]);
}

void myFunction2(struct randomStruct myStruct)
{
  int calculate1 = myStruct.num1 + myStruct.num2;
  int calculate2 = myStruct.num1 - myStruct.num2;
  myStruct.num1 = calculate1;
  myStruct.num2 = calculate2;

  for(int i = 0; myStruct.str[i]; i++)
   myStruct.str[i] = toupper(myStruct.str[i]);
}


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
}
