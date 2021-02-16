//program to find area of the circle
#include<stdio.h>
#include<math.h>

void main() {
    int r;
    printf("enter the radius:-\n");
    scanf("%d",&r);
    printf("area=%.2f\n",3.14*pow(r,2));
    printf("perimeter=%.2f\n",2*3.14*r);
}
