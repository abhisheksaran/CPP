/*
Methods are the functions that belongs to the class
Two types-
1. Inside Class Defn
2. Outside Clasd Defn
*/

#include<bits/stdc++.h>
using namespace std;

class MyClass{
	public: 
		void myMethod(){
			cout<<"Method/Function inside class definition\n";		
		}
};

class MyClass2{
	public: 
		void myMethod();
		
};

void MyClass2::myMethod(){
	cout<<"Method/Function outside class definition\n";
}

int main(){
	
	MyClass obj1;
	obj1.myMethod();
		
	MyClass2 obj2;
	obj2.myMethod();

	return 0;
}
