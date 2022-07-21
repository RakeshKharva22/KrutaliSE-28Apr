#include<stdio.h>
int fibonacci()
{
	int n=10,i;
	int n1=0,n2=1,n3;
	printf("%d %d ",n1,n2);	//0  1
	for(i=2;i<=5;i++)
	{
			n3=n1+n2; // 1+2 = 5
	
			n1=n2; // 2
			n2=n3; //3
			
		printf("%d ",n3);	// 1 2 3 5
		
	}

}

int main()
{
	return 0; 
}