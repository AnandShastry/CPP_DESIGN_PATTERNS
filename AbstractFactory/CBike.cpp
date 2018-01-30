/*
 * CBike.cpp
 *
 *  Created on: Jan 22, 2018
 *      Author: anand
 */

#include "CBike.h"

namespace std {

CBike::CBike() {
	// TODO Auto-generated constructor stub

}

CBike::~CBike() {
	// TODO Auto-generated destructor stub
}

void CBike::prepareParts()
{
	cout<<"Bike parts prepared"<<endl;

}
void CBike::combineParts()
{
	cout<<"Bike parts combined"<<endl;
}
void CBike::assembleParts()
{
	cout<<"Bike parts assembled"<<endl;
	name="Suzuki";
	price=60000.00;
}
void CBike::showProduct()
{
	cout<<"Bike is ready"<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"price:"<<price<<endl;
}






} /* namespace std */
