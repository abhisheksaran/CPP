/*
To create a file, use either the ofstream or fstream object, and specify the name of the file.
To write to the file, use the insertion operator (<<).
To read from a file, use either the ifstream or fstream object, and the name of the file.
Note that we also use a while loop together with the getline() function (which belongs to the ifstream object) to read the file line by line, and to print the content of the file:
*/
#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
	//writing to files;
	ofstream MyFile("example.txt");
	//write to file
	MyFile<<"It's an example of file writing\n";
	MyFile.close();
	
	//reading to files
	string s,line;
	cout<<"Enter the file you want to read:\n";
	cin>>s;
	fstream MyFile2(s);
	while(getline(MyFile2,line)) cout<<line<<"\n";
	MyFile2.close();
	
	return 0;
}
