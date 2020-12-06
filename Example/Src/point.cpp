#include "point.h"

using namespace std;

Point::Point()
{ 
	x=0;
	y=0;
}

Point::Point(int newx,int newy)
{ 
	x=newx; 
	y=newy;
}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{ 
	return y; 
}

void Point::setX(int newx) 
{ 
	x=newx;
}

void Point::setY(int newy)
{ 
	y=newy;
}

void Point::operator+=(const Point &right)
{
	this->x = this->x + right.getX();
	this->y = this->y + right.getY();
}

Point& Point::operator=(const Point &other)
{
	//If the input Point is the same as the point
	//we're already inside of, there's nothing to do here
	if(this == &other)
	{
		return *this;
	}
	
	this->x = other.x;
	this->y = other.y;
	
	return *this;
}

Point operator-(const Point &a)
{
	Point c;
	c.x = -a.x;
	c.y = -a.y;
	return c;
}

bool operator==(const Point &a,const Point &b)
{
	return a.x==b.x && a.y == b.y;
}

bool operator!=(const Point &a,const Point &b)
{
	return !(a == b);
}

ostream& operator<<(ostream& out,const Point &pt)
{
	out << "(" << pt.x << "," << pt.y << ")";
	return out;
}

istream& operator>>(istream& in, Point &pt)
{
	in >> pt.x;
	in >> pt.y;
	return in;
}

Point operator+(const Point &a,const Point &b)
{
	Point c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return(c);
}

Point operator+(const Point &a,const int &b)
{
	Point c;
	c.x = a.x + b;
	c.y = a.y + b;
	return c;
}