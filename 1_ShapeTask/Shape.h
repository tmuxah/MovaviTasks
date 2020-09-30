#pragma once

#define _USE_MATH_DEFINES

#include <cmath>

class IShape
{
public:
	virtual double Area() = 0;
	virtual const char* GetName() = 0;
};

class Square : public IShape
{
public:
	Square(double width)
		: _width(width)
	{}
	double Area() { return _width * _width; }
	const char* GetName() { return "Square"; }

private:
	double _width;
};

class Rectangle : public IShape
{
public: 
	Rectangle(double width, double height)
		: _width(width), _height(height)
	{}
	double Area() { return _width * _height; }
	const char* GetName() { return "Rectangle"; }

private:
	double _width;
	double _height;
};

class Triangle : public IShape
{
public:
	Triangle(double base, double height)
		: _base(base), _height(height)
	{}
	double Area() { return _base * _height / 2.0; }
	const char* GetName() { return "Triangle"; }

private:
	double _base;
	double _height;
};

class Circle : public IShape
{
public:
	Circle(double radius)
		: _radius(radius)
	{}
	double Area() { return _radius * _radius * M_PI; }
	const char* GetName() { return "Circle"; }

private:
	double _radius;
};