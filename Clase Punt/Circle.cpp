#include <iostream>
#include "Circle.h"

const Circle& Circle::operator = (const Circle& a){
	r = a.r;
	return *this;

	}
bool Circle::operator == (const Circle& a)const{
	return (r == a.r) ? true : false;

}
bool Circle::operator != (const Circle& a)const{
	return (r != a.r) ? true : false;

}
const Circle& Circle::operator += (const Circle& a){
	r += a.r;
	return *this;

}
const Circle& Circle::operator -= (const Circle& a){
	r -= a.r;
	return *this;

}
Circle Circle::operator + (const Circle& a)const{
	Circle tmp;
	tmp.r = r + a.r;
	return tmp;

}
Circle Circle::operator - (const Circle& a)const{
	Circle tmp;
	tmp.r = r - a.r;
	return tmp;

}
float GetArea(const Circle& a){
	return (3.14f * a.r);
}