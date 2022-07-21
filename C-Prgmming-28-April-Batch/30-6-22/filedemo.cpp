#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int a;
	ofstream outfile;
	outfile.open("a1.txt",ios::out);
	cout<<"Enter A :"<<endl;
	cin>>a;
	outfile<<a<<endl;
	
	
	ifstream infile;
	infile.open("a1.txt",ios::in);
	cout<<"Reading from File."<<endl;	
	infile>>a;	
	cout<<a<<endl;	
	
	
	outfile.open("a1.txt",ios::app);
	if(infile.is_open())
		cout<<"Enter A :"<<endl;
		cin>>a;
	outfile<<a<<endl;
	cout<<"Data Appended.";
	outfile.close();
	infile.close();
	return 0;
}