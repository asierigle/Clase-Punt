#include <math.h>

#ifndef __POINT_H__
#define __POINT_H__
template<class TYPE>
class Point
{
public:
	TYPE x, y;
	char* characters;
	Point(){ }
	Point(int i){
		x = 0, y = 0, characters = new char[i]; 
	}
	
		const Point<TYPE>& Point<TYPE>::operator = (const Point<TYPE>& a){
			x = a.x;
			y = a.y;
			return *this;
		}
		bool Point<TYPE>::operator == (const Point<TYPE>& a)const{
			return (x == a.x && y == a.y) ? true : false;

		}
		bool Point<TYPE>::operator != (const Point<TYPE>& a)const{
			return (x != a.x && y != a.y) ? true : false;
		}
		const Point<TYPE>& Point<TYPE>::operator += (const Point<TYPE>& a){
			x += a.x;
			y += a.y;
			return *this;

		}
		const Point<TYPE>& Point<TYPE>::operator -= (const Point<TYPE>& a){
			x -= a.x;
			y -= a.y;
			return *this;
		}
		Point Point<TYPE>::operator + (const Point<TYPE>& a)const{
		Point tmp;
		tmp.x = x + a.x;
		tmp.y = y + a.y;
		return tmp;
		}
		Point Point<TYPE>::operator - (const Point<TYPE>& a)const{
		Point tmp;
		tmp.x = x - a.x;
		tmp.y = y - a.y;
		return tmp;
		}
		bool Point<TYPE>::IsZero()const{
			return (x == 0 && y == 0) ? true : false;
		}
		void Point<TYPE>::SetZero(){
			x = 0;
			y = 0;
		}
		Point<TYPE> Point<TYPE>::Negate(){
			x = -x;
			y = -y;
			return *this;
		}
		virtual ~Point(){ delete[] characters; };
private:

};
typedef Point<int> iPoint;
typedef Point<float> fPoint;

#endif
/*class Deriv : public Point
{
public:
	int* numbers;
	Deriv(int i) : Point(i)
	{
		numbers = new int[i];	
	}
	~Deriv(){
		delete[] numbers;
	}

private:

};*/


