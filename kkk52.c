#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    printf("enter the number:");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
            printf("\none");
            break;
        case 2:
            printf("\ntwo");
            break;
         case 3:
            printf("\nthree");
            break;
         case 4:
            printf("\nfour");
            break;
         case 5:
            printf("\nfive");
            break;
         case 6:
            printf("\nsix");
            break;
         case 7:
            printf("\nseven");
            break;
         case 8:
            printf("\neight");
            break;
         case 9:
            printf("\nnine");
            break;
         case 10:
            printf("\nten");
            break;
        default:
            printf("enter less than ten");
            break;
    }
    getch();
}
   
