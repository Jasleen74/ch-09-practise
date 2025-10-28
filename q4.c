/*5. Write a program with a structure representing a complex number.*/
#include<stdio.h>
#include<string.h>

typedef struct complex{
    float img;
    float real;
}C;
int main() {
  
  C c1 = {.real = 4.5 , .img = 3.2};

   printf("The complex number is: %.2f + %.2fi\n", c1.real, c1.img);
     
  
 return 0;
}