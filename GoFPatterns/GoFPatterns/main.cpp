#include <iostream>
#include "singleton.h"
using namespace std;

int main (int argc, char *argv[])
{
	cout << "Hello world!" << endl;
	Singleton* singleton = Singleton::Instance();
	
	return 0;
}

