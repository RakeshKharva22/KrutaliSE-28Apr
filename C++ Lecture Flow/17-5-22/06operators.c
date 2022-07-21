/*
	Operators:
	
	Assignment Op: (=)
	Arithmetic Op: (+,-,*,/,%) 
	Relational/Comparison Op: (<,>,<=,>=,==,!=) ===
	Logical Op: (!, && ,||)
	
	&& 				||
	
	T T   T         T
 	F T   F         T
	T F   F         T
	F F   F         F
	
	
	Increment/Decrement Op (++,--)
	
	Ternary Op:
	
	(condition) ? truepart : falsepart



	23 + 45 operands ==> + binary op
	
	++34  ==> unary op

*/

#include<stdio.h>
int main()
{
	
	int n1 =5,n2=2;
	
	printf("%d",n1%n2);
	
	return 0;
}

