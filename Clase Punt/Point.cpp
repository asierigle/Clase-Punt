#include <iostream>
#include "Point.h"



const Point& Point::operator = (const Point& a){
	x = a.x; 
	y = a.y;
	return *this;
}
bool Point::operator == (const Point& a)const{
	return (x == a.x && y == a.y) ? true : false;
	
}
bool Point::operator != (const Point& a)const{
	return (x != a.x && y != a.y) ? true : false;
}
const Point& Point::operator += (const Point& a){
	x += a.x;
	y += a.y;
	return *this;
	
}
const Point& Point::operator -= (const Point& a){
	x -= a.x;
	y -= a.y;
	return *this;
}
/*Point Point::operator + (const Point& a)const{
	Point tmp;
	tmp.x = x + a.x;
	tmp.y = y + a.y;
	return tmp;
}
Point Point::operator + (Point 4){
	
}
Point Point::operator - (const Point& a)const{
	Point tmp;
	tmp.x = x - a.x;
	tmp.y = y - a.y;
	return tmp;
}*/
bool Point::IsZero()const{
	return (x == 0 && y == 0) ? true : false;
}
void Point::SetZero(){
	x = 0;
	y = 0;
}
Point Point::Negate(){
	x = -x;
	y = -y;
	return *this;
}