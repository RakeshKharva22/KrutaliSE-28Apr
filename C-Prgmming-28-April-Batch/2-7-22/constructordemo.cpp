#include <iostream>
using namespace std;

class staticDemo
{
	public:
			int a,b;
		static int dharmikdoubt;
			staticDemo(int a, int b)
			{
				cout<<"Paramiterized constructor called"<<endl;
				dharmikdoubt++;
				this->a=a;
				this->b=b;
				cout<<"\nA = "<<a<<"\tB = "<<b;
			}
			
			staticDemo()
			{
				cout<<"default constructor called"<<endl;
				dharmikdoubt++;
				this->a =40;
				this->b=20;
				cout<<"\nA = "<<a<<"\tB = "<<b;
			}
			
			staticDemo(const staticDemo &b)
			{	
				b.dharmikdoubt++;							
			}	
			
};

 int staticDemo::dharmikdoubt = 0;

int main()
{
	cout<<"\nDhramik Count"<<staticDemo::dharmikdoubt;
	staticDemo sd1();
	staticDemo sd(10,20);
	staticDemo sd2(sd1);
	cout<<"\nDhramik Count"<<staticDemo::dharmikdoubt;
}