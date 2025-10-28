/*2. Write a function ‘sumVector’ which returns the sum of two vectors passed to it.The vectors must be two–dimensional.*/
#include<stdio.h>
#include<string.h>

 typedef struct vector {
    int i ;
    int j ;
}vector2d;
 
vector2d sumvector (vector2d v1, vector2d v2){
    vector2d v3= {v1.i +v2.i  ,  v1.j+v2.j};
    return v3;
}

int main() {
     vector2d v1;
     printf("enter the value of the first vector pls : ");
     scanf("%d %d", &(v1.i) , &(v1.j));

     vector2d v2;
     printf("enter the value of the second vector pls: ");
     scanf("%d %d", &(v2.i) , &(v2.j));

     vector2d v3 = sumvector(v1,v2);

     printf("The resultant vector is : %d i + %d j ", v3.i , v3.j);


  
 return 0;
}