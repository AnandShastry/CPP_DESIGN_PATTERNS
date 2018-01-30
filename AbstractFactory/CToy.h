/*
 * CToy.h
 *
 *  Created on: Jan 22, 2018
 *      Author: anand
 */

#ifndef CTOY_H_
#define CTOY_H_

#include<iostream>

namespace std {

class CToy
{
protected:
	string name;
	float price;
public:
	CToy();
	virtual ~CToy();

	virtual void prepareParts()=0;
	virtual void combineParts()=0;
	virtual void assembleParts()=0;
	virtual void showProduct()=0;
};

} /* namespace std */

#endif /* CTOY_H_ */
