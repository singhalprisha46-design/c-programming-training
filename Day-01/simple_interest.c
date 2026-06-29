#include <stdio.h>

int main()
{
     
    int p,t,r;
    float si;

    printf("enter the principal amount:");
    scanf("%d",&p);
     printf("enter the rate of interest:");
    scanf("%d",&r);
     printf("enter the time");
    scanf("%d",&t);
    
    si = (p*r*t)/100;
    printf("simple intrest =%f",si);   

     return 0;
}
