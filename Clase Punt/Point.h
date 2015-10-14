#include <math.h>



class Point
{
public:
	int x, y;
	char* characters;
	Point(int i){
		x = 0, y = 0, characters = new char[i]; 
	}
	/*Point(){
		Point p(10, 10);
	}*/
	
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
		virtual ~Point(){ delete[] characters; };
private:

};
class Deriv : public Point
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

};

