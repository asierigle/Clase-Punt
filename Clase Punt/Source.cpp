#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "p2String.h"


/*class A
{
public:
	A(int n) :num(n){}
	int num;


private:

};*/
template<class TYPE>
void Swap(TYPE& b, TYPE& c)
{
	TYPE a;
	a = b;
	b = c;
	c = a;
}

int main(int argc, char** argv){

	p2String Hola("Hola");
	p2String Adeu("Adeu");
	Hola += Adeu;
	printf("%s", Hola.c_str());
	/*int e = 3;
	int w = 5;
#include "PruebaInclude.h"
#include "PruebaInclude.h"
#include "PruebaInclude.h"
	printf("%d", w);
	iPoint f = 5;
	iPoint g = 5;

	Swap(f, g);*/
	/*Point* w = new Deriv(10);
	delete w;*/
	/*A a1(5);
	A b1(a1);
	A* pclass = new A(5);*/
	getchar();
}