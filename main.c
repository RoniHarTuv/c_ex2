#include <stdio.h>
#include "my_mat.h"
#include "my_mat.c"
#define N 10

int main()
{
   int my_mat[N][N]; //build the graph by get numbers from the user
   char c;
   while (true)
   {
      scanf("%c", &c);
      if (c == 'A') //A
      {
         f_1(my_mat); //call to function #1
         builder(my_mat);// calculate the shortest path
         scanf("%c", &c);
      }
      if (c == 'B') //B
      {
         int i = 0;
         int j = 0;
         scanf("%d", &i);
         scanf("%d", &j);
         f_2(i, j, my_mat); //call to function #2
         scanf("%c", &c);
      }
      if (c == 'C')//C
      {
         int i = 0;
         int j = 0;
         scanf("%d %d", &i, &j);
         f_3(i, j, my_mat); //call to function #3
         scanf("%c", &c);
      }
      if (c == 'D')//D
      {
         break;;
      }
   }
   // get_data();
   // return 0;

   // printf("\nThe Matrix is:\n");
   // for (int i = 0; i < N; i++)
   // {
   //    for (int j = 0; j < N; j++)
   //    {
   //       printf("%d", my_mat[i][j]);
   //       printf("\t");
   //    }
   //    printf("\n");
   // }
}