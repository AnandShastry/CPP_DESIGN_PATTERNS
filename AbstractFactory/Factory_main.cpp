//============================================================================
// Name        : Factory.cpp
// Author      : Anand
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================


#include<iostream>
#include "CToyFactory.h"
using namespace std;

int main()
{
	int type=0;
	while(1)
	{
	cout<<"enter type:"<<endl;
	cin>>type;
	if(!type)
		break;
	CToy* Toy=CToyFactory::createToy(type);
	if(Toy)
		Toy->showProduct();
	delete Toy;
	}
	return 0;


}
