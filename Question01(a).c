// Question a of 1 from Assignment 2
// Print out a Multiplication Table
// Power Mechanical Engineering, Junior Year
// Student ID : 104033250
// Name : 吳杰儒

#include <stdio.h>

int main()
{
  int i, j;
  // print out the top bar
  for(i=0; i<10; i++ )
  {
    printf("\t");
    printf("%-4d",i);
    // %4d to align all printed numbers
  }

  printf("\n");

  // print out dash to seperate the top bar
  for(i=0; i<22; i++)
  {
    printf("----");
  }
  printf("\n");

  for(i=0; i<10; i++)
  {
    // print left most column first
    printf("%-4d |",i);

    // print out the multiplication table
    for(j=0; j<10; j++)
    {
      printf("\t");
      printf("%-4d",i*j);
      // %4d to align all printed numbers
    }
    printf("\n");
  }
}
