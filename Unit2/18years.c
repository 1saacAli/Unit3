#include <stdio.h>
void main()
{
  int vote_age;

  printf("What is your age? ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     {
       printf("Warinig, this page may be not appropriate for you.\n");
     }
  else
     printf("Welcome to the program.\n");
}