#include<iostream>
using namespace std;

class Base{
	public:
			virtual void display1(); //PURE Virtual Function	
			virtual void display4();
			
			void display2()
			{
				cout<<"\nNon Pure Virtual Function from Base";
			}			
};

class Derived : public Base{
	public:
		void display1()
		{
			cout<<"Pure Virtual Function 1 Implemented in Derived Class";
		}
		
		void display3()
		{
			cout<<"\nNon Pure Virtual Function from Derived";
		}
		
		void display4()
		{
			cout<<"\nPure Virtual Function4 from Derived";
		}
};

int main()
{
	Derived d;
	d.display1();
	d.display2();
	d.display3();
	
}