#include<stdio.h>
#include<conio.h>

void main()

{
  int a,b;
  char c;
  clrscr();
  printf("Enter Value A = ");
  scanf("%d",&a);
  printf("Enter Value B = ");
  scanf("%d",&b);
  printf("\nPress For '+' Sum\n");
  printf("Press For '-' Substraction\n");
  printf("Press For '*' Multiplication\n");
  printf("Press For '/' Division\n");
  printf("Press For '%' Moduls\n");
  printf("Enter Your Choice = ");
  scanf(" %c",&c);
  switch(c)
     {
	case '+' :
		  printf("Sum of A+B = %d",a+b);
		  break;
	case '-' :
		  printf("Substraction of A-B = %d",a-b);
		  break;
	case '*' :
		  printf("Multiplication of A*B = %d",a*b);
		  break;
	case '/' :
		  printf("Division of A/B = %d",a/b);
		  break;
	case '%' :
		  printf("Sum of A%%B = %d",a%b);
		  break;
	default  :
		  printf("Plz Choice Proper Charector");



     }



  getch();

}