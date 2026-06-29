#include <stdio.h>

int main(){

    float marks;

     printf("enter your marks");
    scanf("%f",&marks);

    if(marks>=90 && marks<=100)
    {
        printf("A+");
    }
    else if (80<=marks && marks<=89)
    {
        printf("A");
    }
    else if (70<=marks && marks<=79)
    {
       printf("B+");
    }
    else if (60<=marks && marks<=69)
    {
        printf("B");
    }
    else if (50<=marks && marks<=59)
    {
        printf("C");
    }
    else if (40<=marks && marks<=49)
    {
        printf("D");
    }
    else{
        printf("FAIL");
    }
    
     return 0;
}
