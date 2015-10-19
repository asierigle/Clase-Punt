#include <iostream>
#include "Point.h"
#include "Circle.h"


void Swapf(float* node1, float* node2)
	{
		float a;
		a = *node1;
		*node1 = *node2;
		*node2 = a;
	}

void Swapc(char* node3, char* node4)
{
	char p;
	p = *node3;
	*node3 = *node4;
	*node4 = p;
}
void Swap(int* node5, int* node6)
{
	int a;
	a = *node5;
	*node5 = *node6;
	*node6 = a;
}
class A
{
public:
	A(int n) :num(n){}
	int num;


private:

};


int main(int argc, char** argv){
	/*int a = 2;
	int b = 4;
	char* c = "hola";
	char* d = "adeu";
	float e = 2.3f;
	float f = 8.4f;
	Point* w = new Deriv(10);
	delete w;
	Swap(&a,&b);
	Swapc(c,d);
	Swapf(&e,&f);*/
	A a1(5);
	A b1(a1);
	A* pclass = new A(5);
	getchar();
}