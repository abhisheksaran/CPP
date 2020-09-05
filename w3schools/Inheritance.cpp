/*
What is inheritance? To inherit methods and attributes from one class to another for purpose of "Do not repeat"/code reusability or to asbtract it out.
Two catagories of inheritance concept-
	1.derived class (child) - the class that inherits from another class.
	2.base class (parent) - the class being inherited from. 
How to inherit from a class? Use the ':' symbol. 
Let's see an example- 
*/
#include<bits/stdc++.h>
using namespace std;
//Base class
class Vehicle{
	public:
		string brand= "Ford";
		void honk(){
			cout<<"Tuut tuu\n";
		}
};
//derived class (inheritance)
class Car: public Vehicle{
	public:
		string model="Mustang";
};

int main(){
	Car myCar;
	myCar.honk();
	cout<<myCar.brand+" "+myCar.model<<"\n";
	return 0;
}
