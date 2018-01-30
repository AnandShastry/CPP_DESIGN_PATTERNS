/*
 * CToyFactory.h
 *
 *  Created on: Jan 22, 2018
 *      Author: anand
 */

#ifndef CTOYFACTORY_H_
#define CTOYFACTORY_H_

#include "CToy.h"
#include "CBike.h"
#include "CCar.h"

namespace std {

class CToyFactory {
public:
	CToyFactory();
	virtual ~CToyFactory();
	static CToy* createToy(int type);

};

} /* namespace std */

#endif /* CTOYFACTORY_H_ */
