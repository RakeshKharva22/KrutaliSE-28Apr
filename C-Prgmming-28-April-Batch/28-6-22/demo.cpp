#include<iostream>
#include<fstream>
using namespace std;

int main()
{
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
}