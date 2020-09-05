/*
What is Constructor? It's a c++ is special method.
Why special? It's special because it's automatically called when an object of the class is created.
How? Method name should be same as class name followed by '()'.
Constructor definition can be inside the class or outside the class like any other method of the class.
There is no return type for constructor method not even 'void'.
See example below-
*/
#include<bits/stdc++.h>
using namespace std;

class MyClass{
	public:
	int a;
	MyClass(int intial_value_a){
		cout<<"Constructor Method Called!!\n";	
		a=intial_value_a;
		cout<<"Initializing value of a to "<<a<<"\n";
	}
};

int main(){
	//this will automatically call the MyClass method because MyClass method is a constructor.
	MyClass myObj(0);
	cout<<"Confirmation that value of a is rightly set to "<<0<<"\n";
	return 0;
}
