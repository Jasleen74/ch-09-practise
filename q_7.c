/*9. Write a structure capable of storing date. Write a function to compare those dates*/

#include<stdio.h>
#include<string.h>
 typedef struct date {
    int mm;
    int dd;
    int yyyy;
}DT;

int compare (DT d1 , DT d2){
    if ((d1.mm == d2.mm) && (d1.dd == d2.dd) && (d1.yyyy == d2.yyyy)){
        return 0 ;                             // zero for the same dates
    }
    else if (d1.dd < d2.dd){
        return -1;
    }

     else if (d1.mm < d2.mm){              // -1 means the first date is past 
        return -1;
    }

     else if (d1.yyyy < d2.yyyy){
        return -1;
     }

      else if (d1.dd > d2.dd){            // +1 for first date is future 
        return 1;
    }

     else if (d1.mm > d2.mm){
        return 1;
     }

      else if (d1.yyyy > d2.dd){
        return 1;
    }

}

int main() {
     DT d1 = {12 , 2, 2024};
     DT d2 = {13, 2, 1997};
     printf("%d", compare (d1,d2));

  
 return 0;
}