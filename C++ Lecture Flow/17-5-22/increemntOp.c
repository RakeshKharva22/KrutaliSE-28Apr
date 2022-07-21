#include<stdio.h>
int main()
{
	
	int a;
	
	printf("Enter any integer number :");
	scanf("%d",&a);
	
	printf(" a = %d",a);// 34
	
	printf("\n Incremented Value = %d",++a);// 35
	
	printf("\n%d",a++);//35
	printf("\n%d",a); // 36
	
	printf("\n%d",--a); //35
	printf("\n%d",a++); //35
}