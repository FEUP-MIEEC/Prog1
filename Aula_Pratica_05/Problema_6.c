#include <stdio.h>

 void testFunc(int n)
 {
 if(n==29)
 printf(":)\n");
 else
 printf(":(\n");
 }

 int main()
 {
  int n, i = 3, count, c;
  n = 10;
  printf("Os primeiros %d numeros primos sao:\n",n);
  printf("2\n");
  for ( count = 2 ; count <= n ; )
  {
    for ( c = 2 ; c <= i - 1 ; c++ )
    {
      if ( i%c == 0 )
      break;
      }
      if ( c == i )
      {
      printf("%d\n",i);
      count++;
      }
    i++;
  }
  testFunc(--i);
  return 0;
}
