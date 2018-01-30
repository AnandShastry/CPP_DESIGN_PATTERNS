/*
 * CCar.cpp
 *
 *  Created on: Jan 30, 2018
 *      Author: anand
 */

#include "CCar.h"

namespace std {

CCar::CCar() {
	// TODO Auto-generated constructor stub

}

CCar::~CCar() {
	// TODO Auto-generated destructor stub
}


void CCar::prepareParts()
{
	cout<<"Car parts prepared"<<endl;

}
void CCar::combineParts()
{
	cout<<"Car parts combined"<<endl;
}
void CCar::assembleParts()
{
	cout<<"Car parts assembled"<<endl;
	name="Suzuki Baleno";
	price=800000.00;
}
void CCar::showProduct()
{
	cout<<"Car is ready"<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"price:"<<price<<endl;
}


} /* namespace std */
