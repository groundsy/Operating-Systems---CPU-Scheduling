#include <stdio.h>
#include <string.h>
#include <time.h>
#include <sys/times.h>

int main ()
{

   int count = 80000, i;
   FILE *filePointer;
   clock_t tick_tock;

   filePointer = fopen("timewasteIO-OUT.txt","w+");

   for (i = 0; i <= count; i++) {
       tick_tock = clock();
       fprintf(filePointer,"%li\n", tick_tock);
   }

   fclose(filePointer);

   return 0;

} 
