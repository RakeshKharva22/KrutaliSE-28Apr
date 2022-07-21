#include<stdio.h>
int main()
{
	int a,b,c;	
	printf("Enter Number 1: ");
	scanf("%d",&a);
	printf("Enter Number 2: ");
	scanf("%d",&b);
	printf("Enter Number 3: ");
	scanf("%d",&c);
	printf("a=%d \nb=%d \nc=%d", a, b,c);
	//412,314,556

//	printf("%d",(a>b && a>c) ? a :   (b>c)? b : c );


	//(a>b) ?  (a>c) ? a : c   :    (b>c)? b : c )     ;
	
	printf("%d",(a>b) ?  (a>c) ? a : c   :    (b>c)? b : c )   ;           
}
	
	
