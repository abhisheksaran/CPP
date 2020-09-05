/*
What is Encapsulation? To hide the sensitive data from users.
Why? 
	(a). It is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts.
 	(b). Increased security of data
How do you achieve encapsulatin? By declaring class variable/attributes as private.
But then how do you get or set these attributes? By using public get set methods inside the class.
Let's see example-  
*/
#include<bits/stdc++.h>
using namespace std;

class Employee{
	private:
		//private attributes
		int salary;
	public:
		//public setter and getter functions
		void setSalary(int s){
			salary=s;
		}
		int getSalary(){
			return salary;
		}
};

int main(){
	Employee e1;
	e1.setSalary(20000);
	cout<<e1.getSalary()<<"\n";
	return 0;
}
