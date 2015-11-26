#include <stdio.h>
#include <unistd.h>
//#include <time.h>

int main()
{
  int x;
  //printf ("Characters: %c %c \n", 'a', 65);
  //printf("%d    ", x);
  for (x=1; x <= 5; x++)
    {
      printf ("%i", x);
      sleep(1);
      printf("    ");
    }
  x =1;
  printf("\n");
  sleep(2);
  while (x <= 5) {
      printf ("%i    ", x);
      sleep(1);
      x++;
  };
  printf("\n");
  return 0;
}
