//pattern 2
#include<stdlib.h>
#include<stdio.h>
int i,j,n;

void ll()
    {
      printf("lower left triangular\n");
      for(i=0;i<n;i++)
        {
          for(j=0;j<=i;j++)
            {
              printf(" * ");
            }
         printf("\n");
        }
    }


void lr()
    {
      printf("lower right triangular\n");
      for(i=n;i>0;i--)
        {
          for(j=0;j<i;j++)
            {
              printf("   ");
            }
          for(j=i;j<=n;j++)
            {
            printf(" * ");
            }
         printf("\n");
        }
    }


void ul()

    {
      printf("upper left triangular\n");
      for(i=n;i>0;i--)
        {
          for(j=0;j<i;j++)
            {
              printf(" * ");
            }
         printf("\n");
        }
    }




void ur()
    {
      printf("upper right triangular\n");
      for(i=0;i<n;i++)
        {
          for(j=0;j<i;j++)
            {
              printf("   ");
            }
           for(j=n;j>i;j--)
            {
              printf(" * ");
            }
         printf("\n");
        }
    }





void main()
    {
     int a,ch;
     do
      {
        printf("enter the type of triangular pattern you need\n\t1)upper right triangular\n\t2)lower right triangular\n\t3)upper left triangular\n\t4)lower left triangular\n\t5)all\n");
        scanf("%d",&a);
           printf("enter the number of columns needed\n ");
           scanf("%d",&n);
        switch (a)
            {
                case 1:ur();break;
                case 2:lr();break;
                case 3:ul();break;
                case 4:ll();break;
                case 5:ur();ul();lr();ll();
                default:printf("you have entered a wrong choice number\n");
            }
            printf("do you need to try another one?\n\tfor\n\t\tnew -->press 1\n\t\texit -->press 0\n");
            scanf("%d",&ch);
       }while(ch!=0);
    }
