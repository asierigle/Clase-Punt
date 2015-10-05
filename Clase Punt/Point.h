#include <math.h>


class Point
{
public:
	int x, y;

		Point operator = (Point a);
		bool operator == (Point a);
		bool operator != (Point a);
		Point operator += (Point a);
		Point operator -= (Point a);
		Point operator + (Point a);
		Point operator - (Point a);
		Point IsZero();
		Point SetZero();
		Point Negate();
private:

};

