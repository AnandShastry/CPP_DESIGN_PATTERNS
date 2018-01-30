//============================================================================
// Name        : singleton.cpp
// Author      : Anand
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "CSingleTon.h"

using namespace std;

int main()
{
	CSingleTon::useInstance()->openfile();

	cout << "" << endl; // prints 
	return 0;
}
