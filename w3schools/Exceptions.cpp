/*
When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).
Exception handling in C++ consist of three keywords: try, throw and catch:
	1. try - allows you to define a block of code to be tested for errors while it is being executed.
	2.throw -  throws an exception when a problem is detected, which lets us create a custom error.
	3.catch - allows you to define a block of code to be executed, if an error occurs in the try block.
*The try and catch keywords come in pairs.
*/

#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class Factorial{
	public:
		//calculate factorial of a number
		int calculate(int n){
			try{	
				//throw an error if number is negative
				if(n<0) throw(n);
				else if( n==0) return 1;
				else return n*calculate(n-1);
			}
			// catch the error whenever it's thrown and print the error message
			catch(int n){
				cout<<"Error : Can't calculate factorial of negative number!!\n";
			}
		}
		
};

int main(){
		
	int n;
	cout<<"What number of factorial you want to know?\n";
	cin>>n;
	Factorial objFact;
	int ans=objFact.calculate(n);
	if(ans>0) cout<<ans<<"\n";
	return 0;
}
