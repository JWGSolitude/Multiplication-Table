// Question b of 1 from Assignment 2
// A Customizable Multiplication Table
// Mechanical Engineering, Junior Student, PME 19
// Student ID : 104033250
// Name : 吳杰儒

#include <stdio.h>
#include <stdlib.h>

// Multiplication table generator
void printMultTable(int x, int y)
{
  int i, j;

  // print out the separator '|'
  printf("\t|\t");

  // print out the top bar
  for(i=0; i<=x; i++)
  {
    printf("%-10d",i);
  }
  printf("\n----------");

  // print out the dash separator
  for(i=0; i<x; i++)
  {
    printf("-----------");
  }

  printf("\n");

  for(i=0; i<=y; i++)
  {
    // print left most column first
    printf("%-2d\t",i);
    printf("|\t");
    printf("");

    // print out the main multiplication table
    for(j=0; j<=x; j++)
    {
        printf("%-10d",i*j);
    }
    printf("\n");
  }

}


int main()
{
  double x, y;
  // Enter Horizontal Columns
  printf("Hej! This is a customizable multiplication table generator \n");
  printf("Enter the number of Horizontal Column: \n");
  scanf("%lf", &x);
  // If the user input a string, string can't be compared with numbers
  // So it would automatically yield to an error
  // Check whether input X is integer or not
  if(x > (int)x)
  {
    printf("Invalid Input Bro! Only Integer");
    exit(1);

  }
  // Check the range of the input
  else if(x > 100 || x <= 0)
  {
    printf("Invalid Input Bro! I'm designed to be only able to caluculate from 1 to 100\n\n");
    exit(1);

  }
  // Now Enter the desired Vertical Row
  else
  {
    printf("and the Vertical Column will be: \n");
  }
  scanf("%lf", &y);
  // Check whether input X is integer or not
  if(y > (int)y)
  {
    printf("Invalid Input Bro! Only Integer");
    exit(1);

  }
  // Check the range of the input
  else if(y > 100 || y <= 0)
  {
    printf("Invalid Input Bro! I'm designed to be only able to caluculate from 1 to 100\n\n");
    exit(1);
  }
  // If all the requirements are fulfilled, call the function
  else
  {
    printMultTable(x, y);
  }
}
