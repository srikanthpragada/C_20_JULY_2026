
#include <stdio.h>

int g = 1; // global variable

void f()
{
  int a = 10;
  int g = 100;


     g++;

}


void main()
{
  int n = 100;

     f();
     g--;
}

