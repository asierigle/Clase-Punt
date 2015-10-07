#include <math.h>

class Circle
{
public:
	int r;
	const Circle& operator = (const Circle& a);
	bool operator == (const Circle& a)const;
	bool operator != (const Circle& a)const;
	const Circle& operator += (const Circle& a);
	const Circle& operator -= (const Circle& a);
	Circle operator + (const Circle& a)const;
	Circle operator - (const Circle& a)const;
	int GetArea(const Circle& a);






private:

};
