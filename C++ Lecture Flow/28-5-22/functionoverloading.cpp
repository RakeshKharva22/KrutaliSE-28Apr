/*

Polymorphism : Poly - Many
			   morphism - forms.
			   
	2 Types : 
	
	1) Compile time - Static Polymorphism -> 
		i. Function overloading -> same name but different parameters.
		ii. Operator overloading ->
		
	2) RunTime Polymorphism - Dynamic Polymorphism
		i) Function overriding

*/


#include<iostream>
using namespace std;

class Arith{
	public:
		
		int add(int a, int b)
		{
			return a+b;
		}
		
		int add(int a1,int b1,int c1)
		{
			return a1+b1+c1;
		}
		
		int add(int a2,float b2,int c2)
		{
			return a2+b2+c2;
		}
};


int main()
{
	
	Arith a;
	cout<<a.add(10,45)<<endl;
	cout<<a.add(23,54,32)<<endl;
	cout<<a.add(21,43.2f,5);
	return 0;
}