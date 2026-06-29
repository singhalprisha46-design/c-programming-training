#include <stdio.h>

int main(){

    float a,b;
    char op;

    printf("enter two numbers:");
    scanf("%f%f",&a,&b);
    printf("enter operation");
    scanf(" %c", &op);
    switch (op)
    {
    case   '+' :
        printf("%f+%f=%f",a,b,a+b);
        break;
    case '-' :
        printf("%f-%f=%f",a,b,a-b);
        break;
    case '*' :
        printf("%f*%f=%f",a,b,a*b);
        break;
    case '/':
        printf("%f/%f=%f",a,b,a/b);
         break; 
    case '%':
        printf("%f%%%f=%f",a,b,(int)a%(int)b);
        break;
    default:
        printf("invalid input");
        
    }
     return 0;
}
