#ifndef __P2STRING_H__
#define __P2STRING_H__	

class p2String
{
public:
	//Constructors and destructors
	//p2String() :str(NULL), capacity(0){}
	p2String(uint);
	p2String(const char*);
	p2String(const p2String&);
	~p2String(){}

	//Methods
	int GetSize(const char*)const;
	const char* c_str()const;

	//Operators
	bool operator == (const char&)const;
	bool operator!=(const char&)const;


private:
	char* str = NULL;
	uint capacity = 0;
};
typedef unsigned int uint

#endif // !__P2STRING_H__
