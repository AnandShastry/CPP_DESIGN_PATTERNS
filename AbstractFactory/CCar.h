/*
 * CCar.h
 *
 *  Created on: Jan 30, 2018
 *      Author: anand
 */

#ifndef CCAR_H_
#define CCAR_H_

#include "CToy.h"

namespace std {

class CCar : public CToy
{
public:
	CCar();
	virtual ~CCar();

	void prepareParts() override;
		void combineParts();
		void assembleParts();
		void showProduct();
};

} /* namespace std */

#endif /* CCAR_H_ */
