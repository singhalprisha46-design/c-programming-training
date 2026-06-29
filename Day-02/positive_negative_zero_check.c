#include <stdio.h>

int main(){

    int a;
    printf("enter the value of a");
    scanf("%d",&a);

    if(a>0)
    {
        printf("num is +ve");
    }
    else if (a==0)
    {
        printf("num is zero");
    }
    else{
        printf("num is -ve");
    }
    
     return 0;
}
