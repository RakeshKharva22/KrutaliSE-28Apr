#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;  // Create Object of Ofstream
    ifstream fin;
    fin.open("prac.txt");
    fout.open ("prac.txt",ios::app); // Append mode
    if(fin.is_open())
    	cout<<"Enter A :"<<endl;
		cin>>a;
		outfile<<a<<endl;
        //fout<< "\n Writing to a file opened from program.\n"; // Writing data to file
    cout<<"\n Data has been appended to file";
    fin.close();
    fout.close(); // Closing the file
    return 0;
}