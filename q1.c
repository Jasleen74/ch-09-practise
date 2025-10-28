/*1. Create a two-dimensional vector using structures in C*/
#include<stdio.h>
struct vector {
    int i ;
    int j ;
};
int main() {

    struct vector v = {1,2};
    printf("the value of the vector is : %d i +%d j ", v.i,v.j);

     
  
 return 0;
}