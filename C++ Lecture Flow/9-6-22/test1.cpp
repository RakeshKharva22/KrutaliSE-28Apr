#include <iostream>
using namespace std;

class A{
	
	int a;
	
	public:
	void accept1()
	{
		cout<<"Enter A : ";
		cin>>a;
	}
	
	void display1()
	{
		cout<<"\nA = "<<a;
	}
};

class B : public A{
	int b;
	
	public:
	void accept2()
	{
		cout<<"\nEnter B : ";
		cin>>b;
	}
	
	void display2()
	{
		cout<<"\nB = "<<b;
	}
};

class C : public B{
	int c;
	
	public:
	void accept3()
	{
		cout<<"\nEnter C : ";
		cin>>c;
	}
	
	void display3()
	{
		cout<<"\nC = "<<c;
	}
};

int main()
{
	C c1;
	cout<<"\nAccept Values"<<endl;
	c1.accept1();
	c1.accept2();
	c1.accept3();
	
	cout<<"\nDisplay Values"<<endl;
	c1.display1();
	c1.display2();
	c1.display3();
	
}