/*
Three kind of access specifier to control how the class methods and attributes can be accessed-
1. public : members are accssible outside the class.
2. private : members can'be be accessed outside the class.(Though it's obvious, private members can be accessed using a public method inside the same class)
3. protected : member can't be accessed outside the class, however, they can be accessed in inherited classes.
By default the attributes are private.
*/
#include<bits/stdc++.h>
using namespace std;

class MyClass{
	public:
		int x;

	private:
		int y;
};

int main(){
	MyClass myObj;
	myObj.x=10;//allowed
	//myObj.y=20; //not allowed, uncomment the line and see by yourself.
	return 0;
}
