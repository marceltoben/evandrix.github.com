#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char *argv[]) {
   char text[1024];
 
   if(argc < 2) {
      printf("Usage: <text to print>n", argv[0]);
      exit(0);
   }
   strncpy(text, argv[1], 1024);
   printf(text);
 
   printf("n");
 
   return EXIT_SUCCESS;
}
