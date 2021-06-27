#include <iostream>
#include <string>

class Shape
{
protected:
	/* data */
	int w, h;
public:
	Shape(int w0 = 0, int h0 =0)
	{
		w = w0;
		h = h0;
	}
	virtual int area()
	{
		std::cout << "Base class" << std::endl;
		return 0;
	}
	// ~Shape();
};
class Rec : public Shape
{
private:
	/* data */
public:
	Rec(int a=0, int b=0): Shape(a,b){}
	int area()
	{
		std::cout << "Rec Class" << std::endl;
		return w * h;
	}
	// ~Rec();
};

class Tr : public Shape
{
private:
	/* data */
public:
	Tr(int a=0, int b=0) : Shape(a,b){}
	int area()
	{
		std::cout << "Tr Class" << std::endl;
		return w * h / 2;
	}
	// ~Tr();
};

int main()
{
	Shape* shape;
	Rec rec(10,7);
	Tr tri(10,5);

	shape = &rec;
	shape->area();
	shape = &tri;
	shape->area();
	return 0;
}