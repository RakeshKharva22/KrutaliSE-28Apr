#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char data[100];
   // open a file in write mode.
   ofstream s1;
   s1.open("dh.txt",ios::out);
   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);
   // write inputted data into the file.
   	s1 << data << endl;
   cout << "Enter your age: "; 
   cin >> data;
   //cin.ignore();
   // again write inputted data into the file.
   s1 << data << endl;
   // close the opened file.
   s1.close();
   
   
   ifstream infile; 
   infile.open("dh.txt",ios::in); 
   cout << "Reading from the file" << endl; 
   infile >> data; 

   // write the data at the screen.
   	 cout << data << endl;	
   // again read the data from the file and display it.
   infile >> data; 
   cout << data << endl; 

   // close the opened file.
   infile.close();
	return 0;
}


