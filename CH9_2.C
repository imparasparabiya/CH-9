#include<stdio.h>
#include<conio.h>

main()
{
   int m;//month name
   clrscr();
   printf("Enter Month Nomber = ");
   scanf("%d",&m);
   switch(m)
    {
	case 1 :
		printf("Month Name if - January\n");
		break;
	case 2 :
		printf("Month Name if - February\n");
		break;
	case 3 :
		printf("Month Name if - March\n");
		break;
	case 4 :
		printf("Month Name if - April\n");
		break;
	case 5 :
		printf("Month Name if - May\n");
		break;
	case 6 :
		printf("Month Name if - June\n");
		break;
	case 7 :
		printf("Month Name if - July\n");
		break;
	case 8 :
		printf("Month Name if - August\n");
		break;
	case 9 :
		printf("Month Name if - Sptember\n");
		break;
	case 10 :
		printf("Month Name if - October\n");
		break;
	case 11 :
		printf("Month Name if - November\n");
		break;
	case 12 :
		printf("Month Name if - December\n");
		break;


    }
  getch();
}