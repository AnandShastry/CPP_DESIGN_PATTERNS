/*
 * CToyFactory.cpp
 *
 *  Created on: Jan 22, 2018
 *      Author: anand
 */

#include "CToyFactory.h"

namespace std {

CToyFactory::CToyFactory() {
	// TODO Auto-generated constructor stub

}

CToyFactory::~CToyFactory() {
	// TODO Auto-generated destructor stub
}


CToy *CToyFactory::createToy(int type)
{
	CToy* Toy=NULL;
	switch(type)
	{
	case 1:
		cout<<"Creating Bike"<<endl;
		Toy=new CBike;
		break;
	case 2:
		cout<<"Creating Car"<<endl;
		Toy=new CCar;
		break;
	default:
		cout<<"Invalid"<<endl;
		break;

	}
	Toy->prepareParts();
	Toy->combineParts();
	Toy->assembleParts();
	Toy->showProduct();
	return Toy;
}

} /* namespace std */
