/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  int i, n, sum=0;

  //input a number from user
  printf("Enter an upper limit : ");
  scanf("%d", &n);

  //find the sum of all numbers
  for(i=1; i<=n; i++)
    {
      sum = sum + i;
    }
  printf("Sum of first %d natural number : %d", n, sum);
  
  return 0;
}

