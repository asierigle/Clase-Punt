#include <string.h>

#ifndef __P2STRING_H__
#define __P2STRING_H__	

class p2String
{
public:
	p2String(){}
	p2String(unsigned int scapacity);
	p2String(const char*);
	p2String(const p2String&);
	int GetSize(const char*)const;
	~p2String(){
		delete str;
	}



private:
	char* str;
	unsigned int capacity;
};


#endif // !__P2STRING_H__
