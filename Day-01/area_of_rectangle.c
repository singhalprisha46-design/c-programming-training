#include <stdio.h>

int main(){
    int length, width, area;

    printf("enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("enter the width of the rectangle: ");
    scanf("%d", &width);

    area = length * width;

    printf("area of the rectangle is: %d", area);
     return 0;
}
