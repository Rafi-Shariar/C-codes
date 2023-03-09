#include <stdio.h>
int main() {
    int rows, k = 0;
 
   scanf("%d", &rows);


   for (int i = 1; i <= rows; i++, k = 0) {

      for (int space = 1; space <= rows - i; space++) {

         printf("  ");
      }
     
      
      while (k != 2 * i - 1) {

        if (i%2!=0)
        {
            printf("^");
            k++;
        }else
        {
          printf("*");
         k++;
        }
        
        
        
         
      }
      printf(" \n");
   }
   return 0;
}