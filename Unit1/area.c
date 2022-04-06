#include<stdio.h>

int main() {
   int length, width, area;
 
   printf("\nEnter the length of rectangle : ");
   scanf("%d", &length);
 
   printf("\nEnter the width of rectangle : ");
   scanf("%d", &width);
 
   if (length == width) 
   {
  printf("Its a square");
}  
else
{
   area = length * width;
   printf("\nArea of Rectangle : %d", area);
}
 
   return (0);
}