#include<iostream>
using namespace std;

class Overloading{
	public:
		int add(int a, int b)
		{
			return a+b;
		}
		
		int add(int a,int b, int c)
		{
			return a+b+c;
		}
};

int main()
{
	Overloading o;
	cout<<o.add(14,57);
	
	Overloading o1;
	cout<<o1.add(54,47,98);
	
	Overloading *o2 = new Overloading;
	cout<<o2->add(47,87,98);
	

	return 0;
}