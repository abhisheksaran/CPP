/*
What is inheritance? To inherit methods and attributes from one class to another for purpose of "Do not repeat"/code reusability or to asbtract it out.
Two catagories of inheritance concept-
	1.derived class (child) - the class that inherits from another class.
	2.base class (parent) - the class being inherited from. 
How to inherit from a class? Use the ':' symbol.
What is multilple inheritance? A class can also be derived from more than one base class, using a comma-separated list: 
Let's see an example- 
*/
#include<bits/stdc++.h>
using namespace std;

//Base class
class MyClass{
	public:
		void myFunction(){
			cout<<"Let's check multiple inheritance. Class=MyClass\n";
		}
};

//another base class 
class MyAnotherClass {
	public:
		void myAnotherFunction(){
			cout<<"Let's check multiple inheritance. Class=MyAnotherClass\n";
		}
};

//multiple derived class (multiple inheritance)
class Child: public MyClass, public MyAnotherClass{	
};

int main(){
	Child myObj;
	myObj.myFunction();
	myObj.myAnotherFunction();
	return 0;
}
