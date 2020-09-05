/*
Classes and Objects are the two main aspects of object oriented programming.
For an example if Vehicle is a class the objects can be bus, car, train, flight etc. which is some basic rules of vehicle class plus their own specifications.
Thus, class is a template for an object and an object is a instance for a class.

Individual objects inherits all the variable and functions from the class.

Example of class definition-
*/

#include<bits/stdc++.h>
using namespace std;

class Helloclass{
	public: 
		int a;
};

class Computerscience{
	public:
		string subject;
		int grade;
};

int main(){
	//create an object of the class defined above
	Helloclass exampleObject;	
	//access the attribute as it's public and set value
	exampleObject.a=10;
	//print attrubute value
	cout<<exampleObject.a<<"\n";	

	//creating multiple objects
	Computerscience csobj1;
	Computerscience csobj2;
	Computerscience csobj3;
	//assign the class attributes
	csobj1.subject="Theory Of Networks";
	csobj1.grade=5;
	csobj2.subject="Combinatorics";
	csobj1.grade=3;
	//can print you as above
	
	return 0;
}
