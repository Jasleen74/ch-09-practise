/*6. Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from
the user.*/

#include<stdio.h>
#include<string.h>

typedef struct complex{
    float img;
    float real;
}C;

int show(C c1){
    printf("The complex number is: %.2f + %.2fi\n", c1.real, c1.img);
    return 0;
}
int main() {

    C complex_array [5];

    for (int i = 0; i<5; i ++){
        C ci ;
        printf("Enter the complex number values pls : ");
        scanf("%f %f", &complex_array[i].real, &complex_array[i].img);
        show(ci );
        
    }

    for (int i = 1; i < 6; i++) {
        show(complex_array[i] );
    }

     
  
 return 0;
}