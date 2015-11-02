#ifndef __P2STRING_H__
#define __P2STRING_H__	


class p2String
{
public:
	//Constructors and destructors
	//p2String() :str(NULL), capacity(0){}
	p2String(unsigned int);
	p2String(const char*);
	p2String(const p2String&);
	~p2String();

	//Methods
	int GetSize(const char*)const;
	const char* c_str()const;

	//Operators
	bool operator == (const p2String&)const;
	bool operator!=(const p2String&)const;
	const p2String& operator = (const p2String&);
	const p2String& operator += (const p2String&);


private:
	char* str = NULL;
	unsigned int capacity = 0;
};

#endif // !__P2STRING_H__
