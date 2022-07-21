#include<iostream>
using namespace std;

class base{
	public:
		void show()
		{
			cout<<"\nShow from Base";
		}
};

class derived : public base{
	public:
		void show()
		{
			cout<<"\nShow from Derived";
		}
};

int main()
{
	base *b = new derived;
	b->show();
}