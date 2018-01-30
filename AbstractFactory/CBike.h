/*
 * CBike.h
 *
 *  Created on: Jan 22, 2018
 *      Author: anand
 */

#ifndef CBIKE_H_
#define CBIKE_H_

#include "CToy.h"

namespace std {

class CBike: public CToy
{
public:
	CBike();
	virtual ~CBike();

	void prepareParts() override;
	void combineParts();
	void assembleParts();
	void showProduct();
};

} /* namespace std */

#endif /* CBIKE_H_ */
