// Question 2 from Assignment 2
// Summation of the input number with a power of 8
// Mechanical Engineering, Junior Student, PME 19
// Student ID : 104033250
// Name : 吳杰儒

#include <stdio.h>
#include <stdlib.h>

// Calculator, defined function
void calculator(int x)
{
  int i, j;
  int results = 0;
  int sum = 0;

  // i is the input number
  // the second for-loop is necessary as the Assignment required
  // it would loop 8 times and make the input i times itself 8 times
  // which we gain a power of 8 of input i
  // results == i^8
  for(i=1; i<=x; i++)
  {
    results=1;
    for(j=1; j<=8; j++)
    {
      results*=i;
    }
    sum += results;

  }
  printf("%d \n", sum);

}

int main()
{
  double x;
  printf("To which number do you want to add up to? ");
  scanf("%lf", &x);
  // If the user input a string, string can't be compared with numbers
  // So it would automatically yield to an error
  // Check whether input X is integer or not
  if(x > (int)x || x <= 0)
  {
    printf("Invalid Input Bro! Only Integer");
    exit(1);
  }
  // If the requirements are fulfilled, call the function
  else
  {
    calculator(x);
  }
}
