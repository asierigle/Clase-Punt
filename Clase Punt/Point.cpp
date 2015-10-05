#include "Point.h"

Point Point::operator = (Point a){
	x = a.x; 
	y = a.y;
	return *this;
}
bool Point::operator == (Point a){
	return (x == a.x && y == a.y) ? true : false;
	
}
bool Point::operator != (Point a){
	return (x != a.x && y != a.y) ? true : false;
}
Point Point::operator += (Point a){
	x += a.x;
	y += a.y;
	return *this;
	
}
Point Point::operator -= (Point a){
	x -= a.x;
	y -= a.y;
	return *this;
}
Point Point::operator + (Point a){
	Point tmp;
	tmp.x + a.x;
	tmp.y + a.y;
	return tmp;
}
Point Point::operator - (Point a){
	Point tmp;
	tmp.x - a.x;
	tmp.y - a.y;
	return tmp;
}
Point Point::IsZero(){

}