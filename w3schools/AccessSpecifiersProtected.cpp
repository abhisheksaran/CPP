/*
Three kind of access specifier to control how the class methods and attributes can be accessed-
1. public : members are accssible outside the class.
2. private : members can'be be accessed outside the class.(Though it's obvious, private members can be accessed using a public method inside the same class)
3. protected : member can't be accessed outside the class, however, they can be accessed in inherited classes.
By default the attributes are private.
**The third specifier, protected, is similar to private, but it can also be accessed in the inherited class:
*/
#include<bits/stdc++.h>
using namespace std;

//base class
class Employee{
	protected:
		int salary;
};

//inherited class
class Programmer : public Employee{
	public:
		int bonus;
		//salary can be accessed in inherited class
		void setSalary(int s){
			salary =s;
		}
		int getSalary(){
			return salary;
		}
};
//main function 
int main(){
	Programmer myProgrammer;
	myProgrammer.setSalary(200000);//allowed
	myProgrammer.bonus=50000;
	cout<<"Salary: "<<myProgrammer.getSalary()<<"\n";
	cout<<"Bonus: "<<myProgrammer.bonus<<"\n";

	return 0;
}
