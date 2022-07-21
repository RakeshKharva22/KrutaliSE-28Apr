#include <iostream>
using namespace std;

class A{
	public:
		static int a = 0;
	
	void getA()
	{
		cin>>a;
	}
	
	void showA()
	{
		cout<<a;
	}
};


int main()
{
	A a;
	
a.getA();
	a.showA();
}