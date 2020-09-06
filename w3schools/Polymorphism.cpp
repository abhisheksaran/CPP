/*
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks.
Why? For code reusability
When? When you create a new class and want to use methods and attributes of an already defined class.
Let's look at an example-
*/
#include<bits/stdc++.h>
using namespace std;

class Animal{
	public:
		void animalSound(){
			cout<<"Each animal makes an sound\n";
		}
};

//dog and pig object when creted will override the animalSound function.
//Derived class
class Pig : public Animal{
	public:
		void animalSound(){
			cout<<"The pig say wee wee \n";
		}
};

//Derived class
class Dog : public Animal{
	public:
		void animalSound(){
			cout<<"The dog say woo woo \n";
		}
};


int main(){
	Animal animalObj;
	animalObj.animalSound();
	Dog dogObj;
	dogObj.animalSound();
	Pig pigObj;
	pigObj.animalSound();
	return 0;
}
