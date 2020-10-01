// WAP to input marks of 2 students in 3 subjects also find the percentage & display the result in matrix form
#include<stdio.h>
#include <curses.h>
int main()
 {
   float per[2],tot[2]={0,0};
   int a[2][3],i,j;
   printf("Enter marks\n");
   for ( i = 0; i < 2; i++)
   {
      for ( j = 0; j < 3; j++)
      {
         scanf("%d\n",&a[2][3] );
         tot[i]=tot[i]+a[i][j];
      }
      per[i]=tot[i]/3;
   }
puts("\n\n");
for ( i = 0; i < 2; i++)
      {
        for ( j = 0; j < 3; j++)
            {
              printf("%d\t",a[i][j] );
            }
        printf("%f\t%f\n",tot[i],per[i] );
      }

  return 0;
}
