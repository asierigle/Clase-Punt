#include <math.h>


class Point
{
public:
	int x, y;
	Point();
	Point(){
		Point p(10, 10);
	}
	Point(){
		
	}
		const Point& operator = (const Point& a);
		bool operator == (const Point& a)const;
		bool operator != (const Point& a)const;
		const Point& operator += (const Point& a);
		const Point& operator -= (const Point& a);
		Point operator + (const Point& a)const;
		Point operator - (const Point& a)const;
		bool IsZero()const;
		void SetZero();
		Point Negate();
	~Point();
private:

};


