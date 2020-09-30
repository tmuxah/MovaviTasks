#include "Shape.h"
#include <iostream>

int main()
{
	IShape* shapes[] = {
		new Square(11),
		new Rectangle(7, 8),
		new Triangle(10, 8),
		new Circle(13)
	};

	for (const auto& shape : shapes)
	{
		std::cout << shape->GetName() << "'s area is " << shape->Area() << std::endl;
		delete shape;
	}

	return 0;
}