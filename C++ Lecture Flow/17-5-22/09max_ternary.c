/*

		12 + 23 => (Binary op)
		
		
		
		++34  == unary op(++,--)

		Operators:
		Assignment Op: (=)====> a=b
		Arithmetic Op (+,-,*,/,%)
		
		/ => quotient
		% => remainder
		
		Relational /Comparison ( <,>,<=,>=,==,!=) ==> a==b (===)
		
		logical Op(! , && , ||)
		
		!(1==1)
		{
		..some code
		}
		
		&&            ||
		
		T T  => T     T
		F T  => F     T
		T F  => F     T
		F F  => F     F
		

		
		
		
		Increment/Decrement Op(++,--)
		
		Ternary Op:
		
		(condition) ? truepart : falsepart

*/

#include<stdio.h>
main()
{
	int a=50,b=5;
	//int b =2;
	
	printf("%d\n",a/b); //
	printf("%d\n",a%b); //0
	
	printf("%d\n",a); //50
	
	//printf("%d",--a);//49


	printf("%d\n",a--);//	50 ===> 49
	
	printf("%d",a);
	
	
	
}