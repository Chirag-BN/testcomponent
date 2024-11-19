#include<stdio.h>

void swap(int* a, int* b)
{
  *a = *a - *b;
  *b = *a + *b;
  *a = *b - *a;
  printf("After swapping inside function: a=%d , b=%d\n", *a, *b);
}

int main()
{
  int a = 10, b = 20;
  printf("Before swapping: a=%d, b=%d\n", a, b);
  swap(&a, &b);
  printf("After swapping in main: a=%d, b=%d\n", a, b);
  return 0;
}
