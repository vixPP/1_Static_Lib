#include <iostream>
#include "SLib.h" 

using namespace std;
int main()
{
	string name;
	SLib::Greeter greeter;
	greeter.greet(name);
}