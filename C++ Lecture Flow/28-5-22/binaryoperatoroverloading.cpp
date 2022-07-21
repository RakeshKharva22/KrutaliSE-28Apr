#include<iostream>

using namespace std;

class Complex{
		
		int a,b;
		
		public:
		void  getvalue()
		{
			cout<<"Enter the Complex values A & B : ";
			cin>>a>>b;
		}
		
		Complex operator+(Complex ob)		
		{
			Complex t;
			t.a = a + ob.a;
			t.b = b + ob.b;
			return(t);
		}
		
		void display()
		{
			cout<<"\n"<<a<<" + "<<b;
		}
};

int main()
{
	Complex obj1,obj2,res1,res2;
	obj1.getvalue();
	obj2.getvalue();
	
	cout<<"Display Input"<<endl;
	obj1.display();
	obj2.display();
	
	res1 = obj1 + obj2;
	
	cout<<"\nResult = "<<endl;
	res1.display();

}