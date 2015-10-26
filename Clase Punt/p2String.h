#include <string.h>

#ifndef __P2STRING_H__
#define __P2STRING_H__	

class p2String
{
public:
	p2String(){};
	p2String(const p2String&);
	p2String(char*);
	p2String(uint);


	~p2String();


private:
	char* str;
	uint capacity;
};
typedef unsigned int uint;
p2String::p2String()
{
}

p2String::~p2String()
{
}
#endif // !__P2STRING_H__
