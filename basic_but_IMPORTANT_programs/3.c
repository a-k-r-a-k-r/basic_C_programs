//add two integer numbers
/*why the sum of 4294967296 and 1 gives 1 itself and not the negative of the half of the number*/
//4294967296 = [ie.(pow(2,4)), as the size of integer is 4 bytes ]

#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the nos:-\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d\n",c);
}
