#include<stdio.h>
int main ()
{
	int a,b,c,add,sub,mul,div,divisible ;
	printf ("Enter the value of a:");
	scanf("%d", &a);
	printf("Enter the value of b:");
	scanf ("%d",&b);
	printf("Enter the value of c:");
	scanf("%d", &c);
	add=a+b+c;
	sub=a-b-c;
	mul=a*b*c;
	div=a/b/c;
	divisible= a%b%c;
	
	printf("Addition=%d\n",add);
	printf("Substraction=%d\n",sub);
	printf("Multiplication=%d\n",mul);
	printf("Division=%d\n",div);
	printf("Divisible=%d\n", divisible);

	 return 0;
	 
}
