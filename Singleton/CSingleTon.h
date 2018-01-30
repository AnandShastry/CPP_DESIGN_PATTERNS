/*
 * CSingleTon.h
 *
 *  
 *      Author: anand
 */
#include <iostream>

#ifndef CSINGLETON_H_
#define CSINGLETON_H_

namespace std {

class CSingleTon
{
private:
	static CSingleTon* CSingleTonInst;
	CSingleTon(){}
	virtual ~CSingleTon(){}
	CSingleTon(const CSingleTon&){}
	
public:
	static CSingleTon* useInstance()
	{
		if(CSingleTon::CSingleTonInst == NULL)
		{
			
			CSingleTon::CSingleTonInst=new CSingleTon();
		}
			
			return CSingleTon::CSingleTonInst;
	}

	void openfile()
	{
        cout<<"Open file for reading"<<endl;
	}

};

CSingleTon* CSingleTon::CSingleTonInst=NULL;

} /* namespace std */

#endif /* CSINGLETON_H_ */
