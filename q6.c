/*8. Create a structure representing a bank account of a customer. What fields did you use and why?*/
#include<stdio.h>
#include<string.h>

struct bank{
    char name[50];
    int acc_no;
    int balance ;

};

int main() {
    struct bank b1 ;
    b1.acc_no = 7777777;
    strcpy(b1.name , "Mustang");
    b1.balance = 7000000;

    printf("The customer named : %s, account number %d have a balance of %d ", b1.name,b1.acc_no,b1.balance);

     
  
 return 0;
}