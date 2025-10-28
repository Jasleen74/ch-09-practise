/*4. Write a program to illustrate the use of arrow operator → in C.*/

#include<stdio.h>
#include <string.h>

struct students{
    int rollno;
    float marks;

};
int main() {

    struct students s1;
    struct students *ptr;
    ptr = &s1;

    s1.rollno = 7;

    printf("The rollno of the students is : %d", ptr -> rollno);
     
  
 return 0;
}