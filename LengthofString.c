#include <stdio.h>
#include <string.h>
int main()
{
  String a[100];
  int length;

  printf("Enter a string to calculate its length\n");
  getstring(a);

  length = stringlen(a);

  printf("Length of the string = %d\n", length);

  return 0;
}
