/*
What is inheritance? To inherit methods and attributes from one class to another for purpose of "Do not repeat"/code reusability or to asbtract it out.
Two catagories of inheritance concept-
	1.derived class (child) - the class that inherits from another class.
	2.base class (parent) - the class being inherited from. 
How to inherit from a class? Use the ':' symbol.
What is multilevel inheritance? A class can also be derived from one class, which is already derived from another class. 
Let's see an example- 
*/
#include<bits/stdc++.h>
using namespace std;

//Base class
class MyClass{
	public:
		void myFunction(){
			cout<<"Let's check multilevel inheritance\n";
		}
};

//derived class (Inheritance) 
class Child: public MyClass {
};

//derived derived class (Multilevel Inheritance) 
class GrandChild: public Child {
};



int main(){
	GrandChild myObj;
	myObj.myFunction();
	return 0;
}
